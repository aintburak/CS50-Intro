#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

int preferences[MAX_VOTERS][MAX_CANDIDATES];

typedef struct {
    char* name;  // Pointer to dynamically allocated memory for the name
    int votes;
    bool eliminated;
} candidate;

candidate candidates[MAX_CANDIDATES];
int voter_count, candidate_count;

bool vote(int voter, int rank, char* name);
void tabulate(void);
bool print_winner(void);
int find_min(void);
bool is_tie(int min);
void eliminate(int min);

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Usage: runoff [candidate ...]\n");
        return 1;
    }

    candidate_count = argc - 1;
    if (candidate_count > MAX_CANDIDATES) {
        printf("Maximum number of candidates is %i\n", MAX_CANDIDATES);
        return 2;
    }

    for (int i = 0; i < candidate_count; i++) {
        candidates[i].name = strdup(argv[i + 1]); // Duplicate string
        candidates[i].votes = 0;
        candidates[i].eliminated = false;
    }

    printf("Number of voters: ");
    scanf("%d", &voter_count);
    if (voter_count > MAX_VOTERS) {
        printf("Maximum number of voters is %i\n", MAX_VOTERS);
        return 3;
    }

    char* name = NULL;
    size_t len = 0;
    ssize_t read;

    for (int i = 0; i < voter_count; i++) {
        for (int j = 0; j < candidate_count; j++) {
            printf("Rank %i: ", j + 1);
            read = getline(&name, &len, stdin);  // Dynamically read line
            if (read <= 0) {
                printf("Invalid input.\n");
                return 4;
            }
            name[strcspn(name, "\n")] = 0;  // Remove newline character

            if (!vote(i, j, name)) {
                printf("Invalid vote.\n");
                return 4;
            }
        }
        printf("\n");
    }

    while (true) {
        tabulate();
        bool won = print_winner();
        if (won) break;

        int min = find_min();
        bool tie = is_tie(min);
        if (tie) {
            for (int i = 0; i < candidate_count; i++) {
                if (!candidates[i].eliminated) {
                    printf("%s\n", candidates[i].name);
                }
            }
            break;
        }

        eliminate(min);
        for (int i = 0; i < candidate_count; i++) {
            candidates[i].votes = 0;
        }
    }

    free(name);  // Free dynamically allocated input buffer
    for (int i = 0; i < candidate_count; i++) {
        free(candidates[i].name);  // Free dynamically allocated candidate names
    }
    return 0;
}


// Record preference if vote is valid
bool vote(int voter, int rank, char* name)
{
    int j;

    for (j = 0; j < candidate_count; j++) {
        
        if(!strcmp(candidates[j].name,name)) { // if they match
            preferences[voter][rank] = j;
            return true;
        }
    }
    return false;
}

// Tabulate votes for non-eliminated candidates
void tabulate(void)
{
    int i,j;
    for (i = 0; i < voter_count; i++) {
        for (j = 0; j < candidate_count; j++) { 
            int index = preferences[i][j]; // index of candidate
            if((!candidates[index].eliminated)) {
                // find relevant candidate  AND check if that candidate has not been eliminated yet 
                candidates[index].votes++;
            }
            
        }
    }
    return;
}

// Print the winner of the election, if there is one
bool print_winner(void)
{
    int i;
    double reqVotes = round(((double)voter_count)/2);
    int maxIndex = 0; // init max
    for (i = 0; i < candidate_count; i++) { 
        
        if((!candidates[i].eliminated) && (candidates[i].votes >= reqVotes)) {
            printf("\n%s is the winner.",candidates[i].name);
           return true;
        }
    }

    return false;
}

// Return the minimum number of votes any remaining candidate has
int find_min(void)
{
    // TODO
    return 0;
}

// Return true if the election is tied between all candidates, false otherwise
bool is_tie(int min)
{
    // TODO
    return false;
}

// Eliminate the candidate (or candidates) in last place
void eliminate(int min)
{
    // TODO
    return;
}
