#include<stdio.h>

int main()
{
    int age;
    while(1)
    {
        printf("Enter your age: ");
        scanf("%d",&age);
        if (age>18)
        {
        break;
        }
        else{
            printf("Nonsense\n");
        }

    }


    return 0;
}