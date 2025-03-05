#include<stdio.h>

int NumSum(int num1,int num2)
{
    int sum;
    sum=num1+num2;
    return (sum);
}

int NumMinus(int num1,int num2)
{
    int Minus;
    Minus=num1-num2;
    return (Minus);
}
int main()
{
    int a1,a2;
    a1=6;
    a2=4;
    int result1=NumSum(a1,a2);
    int result2=NumMinus(a1,a2);
    printf("Addition: %d\n",result1);
    printf("Subtractor: %d",result2);
    return 0;
}