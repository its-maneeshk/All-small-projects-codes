#include <stdio.h>

int main()
{
    int num = 0, i, n;

    printf("Enter Number up to where you want the sum: ");
    scanf("%d", &n);

    printf("Here are the first %d natural numbers: \n", n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
        num = num + i;
    }
    printf("\nSum of all numbers is: %d\n", num);

    return 0;
}
