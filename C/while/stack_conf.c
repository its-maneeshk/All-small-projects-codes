#include<stdio.h>
#define MAX 4
int stack_size[MAX];
int top=-1;
void push(int data)
{
    if(top==MAX-1) //initially 3 but???
    {
        printf("Overflow");
        return; // break not?
    }
    else
    {
        top=top+1;
        stack_size[top]=data;
        
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    return 0;
}