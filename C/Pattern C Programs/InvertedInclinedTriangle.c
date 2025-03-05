#include<stdio.h>

int main()
{
    for(int i=1;i<=8;i++)
    {
        for(int j=8;j>=i;j--)       //note: here j=8;j>=i means j that is 8 will runs from 8-->1 then 8-->2 then 8-->3...
        {
            printf("* ");
        }
        printf("\n");
    }
    
    
    
    return 0;
}