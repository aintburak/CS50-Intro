#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compute_score(char* word);

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
    // Init vars
    char* word1 = malloc(sizeof(char) * 50);
    char* word2 = malloc(sizeof(char) * 50);

    // Prompt the user for two words
    printf("Player 1: ");
    scanf("%s", word1);
    word1 = realloc(word1, sizeof(char)*sizeof(word1));
    printf("Player 2: ");
    word2 = realloc(word2, sizeof(char)*sizeof(word2));
    scanf("%s", word2);
    
    // Testing
    printf("\nword1:  %s, word2: %s\n", word1, word2);

    // Compute the score of each word
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Print the winner   
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }


}


int compute_score(char* word)
{
    // Keep track of score
    int score = 0;

    // Compute score for each character
    for (int i = 0, len = strlen(word); i < len; i++)
    {
        if (isupper(word[i]))
        {
            score += POINTS[word[i] - 'A'];
        }
        else if (islower(word[i]))
        {
            score += POINTS[word[i] - 'a'];
        }
    }

    return score;
}