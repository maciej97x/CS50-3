#include <stdio.h>
#include <sdlib.h>
#include <stdint.h>
typedef uin8_t BYTE;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }

    FILE *input_file = fopen(argv[1], "r");

    if(input_file == NULL)
    {
    printf("Could not open file");
    return 2;
    }
    unsigned char buffer[512];
    int count_image = 0;

    FILE *output_file == NULL;
    char *filename == malloc(8* sizeof(char));
}