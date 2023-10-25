#include <stdio.h>
#include <sdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }

    FILE *input_file = fopen(argv[1], "r");

    if(input_file == NULL)

    printf("Could not open file");
    return 2;
}