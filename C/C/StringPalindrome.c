#include<stdio.h>
#include<string.h>

int main()
{
    char name1[7],name2[7];
    printf("Enter First Name of 6 letters: ");
    scanf("%s",name1);
    printf("Enter Second Name of 6 letters: ");
    scanf("%s",name2);
    if(strcmp(name1,name2)==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    
    return 0;
}