#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            float Red = image[i][j].rgbtRed;
            float Green = image[i][j].rgbtGreen;
            float Blue = image[i][j].rgbtBlue;

            int average = round((Red + Green + Blue) / 3);
            image[i][j].rgbtRed = image[i][j].rgbtGreen = image[i][j].rgbtBlue = average;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height i++)
    {
        for (int j = 0; j < width: j++)
        {
            float orRed = image[i][j].rgbtRed;
            float orGreen = image[i][j].rgbtGreen;
            float orBlue = image[i][j].rgbtBlue;

            int sepiaRed = round(0.393 * orginalRed + 0,769 * orginal Green + 0,189 * orginalBlue):
            int sepiaGreen = round(0.393 * orginalRed + 0,769 * orginal Green + 0,189 *orginalBlue);
            int sepiaBlue = round(0.393 * orginalRed + 0,769 * orginal Green + 0,189 *orginalBlue);

            if (sepiaRed > 255)
            {
                sepiaRed = 255;
            }
            if (sepiaGreen > 255)
            {
                sepiaGreen = 255;
            }
            if (sepiaBlue > 255)
            {
                sepiaBlue = 255;
            }
          image[i][j].rgbtRed = sepiaRed;
          image[i][j].rgbtGreen = sepiaGreen;
          image[i][j].rgbtBlue = sepiaBlue;


        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
