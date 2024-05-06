#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover FILE\n");
        return 1;
    }

    FILE *card = fopen(argv[1], "r");
    if (card == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    uint8_t buffer[512]; // unsigned integer 8-bytes as type
    FILE *img = NULL;
    char filename[8];
    int filecount = 0;
    
    while (fread(buffer, 1, 512, card) == 512) // we are reading 512 bytes by 1 byte
    {
        // Check for JPEG header
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            // Close the previous JPEG file if it exists
            if (img != NULL)
            {
                fclose(img);
            }

            // Create a new JPEG file
            sprintf(filename, "%03d.jpg", filecount++);
            img = fopen(filename, "w");
            if (img == NULL) {
                printf("Could not create %s.\n", filename);
                return 1;
            }
        }

        // Write to the JPEG file if it is open
        if (img != NULL)
        {
            fwrite(buffer, 1, 512, img);
        }
    }

    // Close any remaining open files
    if (img != NULL)
    {
        fclose(img);
    }

    fclose(card);
    return 0;
}
