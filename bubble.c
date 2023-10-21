#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO

    // Ask the user for a message using get_string and stored it in variable "message"
    string message = get_string("Message: ");

    // convert the string into decimal
    for (int i = 0, n = strlen(message); i < n; i++)
    {
        int decimal = (int) message[i];

        // This moves the bits to the left starting at 7 places and uses the bitwise & 1 operator
        // to check the right most bit for the "on" position
        // This way the bit can be printed out from left to right
        for (int j = BITS_IN_BYTE - 1; j >= 0; j--)
        {
            int bit = (decimal >> j) & 1;
            print_bulb(bit);
        }
        printf("\n");
    }



}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}