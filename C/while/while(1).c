#include<stdio.h>
int main()
{
    int age;
    printf("You will only enter into this game if you're 18 Yrs old.\nLets See...\n");
    while(1)
    {
        printf("Enter you'r age: ");
        scanf("%d",&age);
        if(age>18)
        {
            printf("Booyah\n");
            break;
        }
        else{
            printf("Oh really\n");
        }
    }


    return 0;
}