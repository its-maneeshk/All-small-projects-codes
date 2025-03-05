#include<stdio.h>

int main()
{
    int n, count = 0;
    printf("***********************************************\n");
    printf("* Welcome to Prime Number Checker!             *\n");
    printf("* Enter any number to check if it's Prime or Not *\n");
    printf("***********************************************\n");
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }

    if(count == 2)
    {
        printf("\tEntered Number is Prime.\n");
    }
    else
    {
        printf("\tEntered Number is Not Prime.\n");
    }

    return 0;
}
