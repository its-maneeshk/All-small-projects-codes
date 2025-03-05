#include<stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=7;i++)
    {
        for(k=7;k>=1;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }





    return 0;
}