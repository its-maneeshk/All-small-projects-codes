#include<stdio.h>
int main() {
    int length;
    printf("Enter number of element you want to enter: ");
    scanf("%d",&length);

    int num[length];

    // Storing user input
    printf("Enter the number.\n");
    for(int i=0; i<length; i++) {
        printf(">> ");
        scanf("%d",&num[i]);
    }

    // Decorating and Printing user input
    printf("This is what you've entered >>> {");
    for(int i=0; i<length; i++) {
        printf("%d",num[i]);
        if(i<length-1) {
            printf(", ");
        }
    }
    printf("} \n                      ~ Reached LOC ~");
    


    return 0;
}