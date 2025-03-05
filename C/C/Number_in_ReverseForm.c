#include<stdio.h>

int main()
{
    int num, x;

    printf("Enter the Number You want to reverse: ");
    scanf("%d", &x);

    printf("Number in Reversed form: ");
    while(x != 0)
    {
        num = x % 10;
        printf("%d", num);
        x = x / 10;
    }
    return 0;
}
