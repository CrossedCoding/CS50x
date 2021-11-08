#include <stdio.h>
//#include <cs50.h>

int main(void)
{
    
    int start_pop = 0;
    int end_pop = 0;

    do
    {

        start_pop = get_int("Min Population 9, please enter amount: \n");
    }
    while (start_pop < 9);

    do
    {
        
        end_pop = get_int("Must be higher than start, please enter amount: \n");

    } 
    while (end_pop < start_pop);

    int years = 0;
    int temp_pop = start_pop;

    while (temp_pop < end_pop)
{
    
    temp_pop += (temp_pop / 3) - (temp_pop / 4);
    years += 1;

}

    printf("Start size: %d\n", start_pop);
    printf("End size: %d\n", end_pop);
    printf("Years %d\n", years);

}
