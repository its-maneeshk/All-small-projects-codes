#include<stdio.h>

int NumSum(int n1,int n2);
int NumMul(int n1,int n2);

int main()
{
    int num1,num2;
    printf("Enter two number: \n");
    scanf("%d%d",&num1,&num2);
    
    int ResultOFSum=NumSum(num1,num2);
    int ResultOFMul=NumMul(num1,num2);
    
    printf("Sum Ans: %d\n",ResultOFSum);
    printf("Mul Ans: %d",ResultOFMul);
    
    return 0;
}

int NumSum(int n1,int n2)
{
    int sum;
    sum=n1+n2;
    return sum;
}

int NumMul(int n1,int n2)
{
    int mul;
    mul=n1*n2;
    return mul;
}