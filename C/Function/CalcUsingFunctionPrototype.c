#include<stdio.h>

int NumSum(int num1,int num2)
{
    int sum;
    sum=num1+num2;
    return (sum);
}

int NumSub(int num1,int num2)
{
    int sub;
    if(num1>num2)
    {
        sub=num1-num2;
        return (sub); 
    }
    else
    {
        return 1;
    }
}

int main()
{
    int x,y;
    x=51;
    y=6;
    int ResultOFSum=NumSum(x,y);
    int ResultOfSub=NumSub(x,y);

    printf("Adding: %d\n",ResultOFSum);
    if(ResultOfSub!=1)
    {
        printf("Subtacting: %d",ResultOfSub);
    }
    else
    {
        printf("Cannot subtrace because Num 1 is greater than other\n");
    }
    return 0;
}