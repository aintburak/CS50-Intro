#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {

    float fval = (27+28+28)/3.0;
    int rounded_val = round((27+28+28)/3.0);
    int ival = 2;
    // printf("\n fval: %f",fval);
    // printf("\n rounded_val: %d",rounded_val);

    printf("\n ival: %.2f",(float)ival*0.125);


    /*
    float originalBlue= (float)image[i][j].rgbtBlue;
    float originalGreen = (float)image[i][j].rgbtGreen;
    float originalRed = (float)image[i][j].rgbtRed;
    
    sepiaRed = round(0.393 * originalRed + 0.769 * originalGreen + 0.189 * originalBlue);
    sepiaGreen = round(0.349 * originalRed + 0.686 * originalGreen + 0.168 * originalBlue);
    sepiaBlue = round(0.272 * originalRed + 0.534 * originalGreen + 0.131 * originalBlue);
    */
    return 0;
}
