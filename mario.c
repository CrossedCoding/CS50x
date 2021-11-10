#include <stdio.h>
#include <cs50.h>

int main(void)
{

//  Get pyramid height 
    int height = 0;

    do
    {

        height = get_int("Choose height: 1-8 \n");
    
    }
    while (height < 1 || height > 8);

//  Prints left side of pyramid
    for (int i = height; i > 0; i--)
    {
        for (int k = height; k < i - 1; k++)

        {

            printf(" ");

        }

        for (int j = height; j < i - 1; j++)
        {

            printf("#");

        }
        printf("  ");

//  Prints right side
        for (int l = height; l > i - 1; l--)
        {

            printf("#");

        }


        printf("\n");

    }
    
}