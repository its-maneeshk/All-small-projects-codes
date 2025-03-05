#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

void push(int);
void pop();
void display();

int stack[SIZE],top=-1;

int main()
{
    int choice,value;
    printf("Press 1 to Push\nPress 2 to Pop\nPress 3 to Display\nPress 4 to Exit");
    printf("Enter choice: ");
    scanf("%d",&choice);
    
    while(1)
    {
        switch(choice)
        {
            case 1:
                printf("Enter the Value to Push\n");
                scanf("%d",&value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong Choice");
        }
    }
}

void push(int value)
{
    if(top==SIZE-1)
    {
        printf("Stack is full\n");
    }
    else
    {
        top++;
        stack[top]=value;
        printf("Done pushing\n");
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
       printf("Element removed %d\n",stack[top]);
       top--;
    }
}
void display()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            printf("%d\n",stack[top]);
        }
    }
}