#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // Change all black pixels to a color of your choosing
    for (int rowa = 0; rowa < width; rowa++)
    {
        for (int column = 0; column < height; column++)
        {
            if (image[column][rowa].rgbtBlue == 0 && image[column][rowa].rgbtGreen == 0 && image[column][rowa].rgbtRed == 0)
            {
                image[column][rowa].rgbtBlue = 0;
                image[column][rowa].rgbtRed = 255;
                image[column][rowa].rgbtGreen = 255;
            }
        }
    }


}
