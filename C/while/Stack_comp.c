#include<stdio.h>
#define MAX 4

int stack_size[MAX];    
int top=-1;

void push(int data)
{
    if(top==MAX-1)
    {
        printf("Stack Overflow");
        return;
    }
    top=top+1;
    stack_size[top]=data;
}
int main()
{
    push(5);
    push(15);
    push(30);
    push(20);
    push(42);
    return 0;
}