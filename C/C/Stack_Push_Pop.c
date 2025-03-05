#include<stdio.h>
#include<stdlib.h> // Include stdlib.h for the exit() function

#define SIZE 10

void push(int);
void pop();
void display();

int stack[SIZE], top = -1;

int main()
{
    int choice, value;
    
    // Display the menu and process user choice
    while(1)
    {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting the program...\n");
                exit(0);
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}

void push(int value)
{
    if(top == SIZE - 1)
    {
        printf("Stack is full. Cannot push.\n");
    }
    else
    {
        top++;
        stack[top] = value;
        printf("Element %d pushed onto the stack.\n", value);
    }
}

void pop()
{
    if(top == -1)
    {
        printf("Stack is empty. Cannot pop.\n");
    }
    else
    {
        printf("Element %d popped from the stack.\n", stack[top]);
        top--;
    }
}

void display()
{
    if(top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Elements in the stack:\n");
        for(int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}
