#include<stdio.h>

union sum
{
    int number;
    char name[10];
};


int main()
{
    union sum s1;
    printf("Enter number ");
    scanf("%d",&s1.number);
    printf("Entre name: ");
    scanf("%s",&s1.name);

    printf("Name: %s and Number: %d",s1.name,s1.number);


    return 0;
}