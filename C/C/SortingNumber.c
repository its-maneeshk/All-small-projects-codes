#include<stdio.h>

int main()
{
    int temp,i;
    int num[10]={0,2,1,8,7,5,9,6,3,4};
    for(i=0;i<10;i++)
    {
        if(num[i]>num[i+1])
        {
            temp=num[i];
            num[i]=num[i+1];
            num[i+1]=temp;
        }
    }
    printf("%d",temp);
    return 0;
}