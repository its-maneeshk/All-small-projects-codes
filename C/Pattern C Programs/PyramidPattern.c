#include<stdio.h>

int main()
{
            //this loop is for rows of pyramid
    for(int i=1;i<=9;i++)
    {
            //this loop is for spaces on each row before asteric
        for(int j=8;j>=i;j--)
        {
            printf(" ");
        }
        
            //this loop is for astric
        for(int k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
            //this is for breaking the astric after each succesful execution to give proper pattern
        printf("\n");
    }
    
    
    
    return 0;
}