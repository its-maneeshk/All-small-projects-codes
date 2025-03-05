#include <stdio.h>

int main() 
{
    int initial = 0, final = 1, nextfinal = 0;
    printf("Welcome to Personalized Fibonacci Series Generator!\n");
    printf("The Fibonacci series is: %d %d", initial, final);
    for(int i = 1; i <= 15; i++)
    {
        printf(" ");
        nextfinal = initial + final;
        printf("%d", nextfinal);
        initial = final;
        final = nextfinal;
    }

    return 0;
}
