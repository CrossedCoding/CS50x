#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Hello, World!");
    
    string name = get_string("What's your name? ");
    print("Hellom %s\n", name);
}