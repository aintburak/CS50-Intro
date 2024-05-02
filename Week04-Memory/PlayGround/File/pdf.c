#include <stdio.h>
#include <stdint.h>

typedef char* string;

int main(int argc, char *argv[])
{
    // run via ./pdf test.pdf
    
    int i;
    char* filename = argv[1];
    
    if(filename == NULL) {
        printf("File could not be found.\n");
        return 1;
    }
    FILE *filep = fopen(filename,"r");
    uint8_t buffer[4]; // unsigned integer with 8 bits -> 1 bytes as type

    fread(buffer,1,4,filep); // where to read, how big chunks, how many chunks all in once, read from file

    for(i = 0; i < 4; i++) {
        printf("%i\n",buffer[i]);
    }
    fclose(filep);

    return 0;
}