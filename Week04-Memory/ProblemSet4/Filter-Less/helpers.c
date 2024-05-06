#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width]) {
    // Loop over all pixels
    for (int i = 0; i < height; i++) {

        for (int j = 0; j < width; j++) {
            // Take average of red, green, and blue

            int average = round((image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed) / 3.0);

            // Update pixel values
            image[i][j].rgbtBlue = average;
            image[i][j].rgbtGreen = average;
            image[i][j].rgbtRed = average;
        }
    }
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    // Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Compute sepia values

            float originalBlue= (float)image[i][j].rgbtBlue;
            float originalGreen = (float)image[i][j].rgbtGreen;
            float originalRed = (float)image[i][j].rgbtRed;

            // ternary op: c = (a < b) ? a : b;

            int sepiaRed =  (round(0.393 * originalRed + 0.769 * originalGreen + 0.189 * originalBlue) > 255) ? 255 : round(0.393 * originalRed + 0.769 * originalGreen + 0.189 * originalBlue);
            int sepiaGreen = (round(0.349 * originalRed + 0.686 * originalGreen + 0.168 * originalBlue) > 255) ? 255 : round(0.349 * originalRed + 0.686 * originalGreen + 0.168 * originalBlue);
            int sepiaBlue = (round(0.272 * originalRed + 0.534 * originalGreen + 0.131 * originalBlue) > 255) ? 255 : round(0.272 * originalRed + 0.534 * originalGreen + 0.131 * originalBlue);

            // Update pixel with sepia values

            image[i][j].rgbtBlue = sepiaBlue;
            image[i][j].rgbtGreen = sepiaGreen;
            image[i][j].rgbtRed = sepiaRed;
        }
    }
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    int lastIndex = width - 1;
    // Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width/2; j++)
        {
            swap(&image[i][j],&image[i][lastIndex-j]);

        }
    }
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    // Create a copy of image
    RGBTRIPLE copy[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            copy[i][j] = image[i][j];
        }
    }
}

void swap(RGBTRIPLE* a, RGBTRIPLE* b) {
    RGBTRIPLE temp = *a;
    *a = *b;
    *b = temp;
}
