#include<stdio.h>
#define MAX 3

int stack_arr[MAX];
int top=-1;

void push(int data)
{
    if(top==MAX-1)
    {
        printf("Stack Overflow\n");
        return 0;
    }
    else
    {
    top=top+1;
    stack_arr[top]=data;
    }
}

int main()
{
    push(1);
    push(10);
    push(20);
    push(30);
    return 0;
}