#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)

{
    string text = get_string("Text ");

    int letters = 0;
    int words = 1;
    int sentences = 0;

    for(int i = 0; i < strlen(text); i++)
    if(isalpha(text[i]))
    {
        letters++;
    }
    else if(text[i] == ' ')
    {
        words++;
    }
    else if(text == '.' || text == '!' || text == '?')
    {
        sentences++;
    }
    float L = (float)letters / (float)words * 100;
    float S = (float)sentences / (float)words * 100;
    int index = round(0,0588 * L - 0,296 * S - 15,8);

    if(index < 1)
    {
        printf("Before grade 1 ");
    }
    else if(index > 16)
    {
        printf("Grade 16+ ");
    }
    else
    {
        printf("Grade %i ", index);
    }

}