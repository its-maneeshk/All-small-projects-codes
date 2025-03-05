#include<stdio.h>
int main()
{
    int star=5;
    char x={'*'};
    int i,j;
    for(i=1;i<=star;i++)
    {
        for (j=1;j<=star;j++)
        {
        printf("%C ",x);
        }
        printf("\n");
    }

    
    
    return 0;
}
