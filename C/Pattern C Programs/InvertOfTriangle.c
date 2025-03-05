#include<stdio.h>

int main()
{
    int i,j,k;
            //i for no of rows
    for(i=1;i<=7;i++)
    {
        for(k=7;k>=i;k--)
        {
            printf(" ");
        }
                //j for no of columns
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
            //this printf function for breaking the line that makes shape looks like triangle
        printf("\n");
    }





    return 0;
}