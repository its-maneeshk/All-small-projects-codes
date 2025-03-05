#include<stdio.h>
int main()
{
    int num=123;
    while(num>0)
    {
        int rev=num%10;
        printf("%d",rev);
        num=num/10;
    }
    return 0;
}