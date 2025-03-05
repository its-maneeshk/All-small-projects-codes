#include<stdio.h>

int main()
{
    int arr[4]={10,12,13,15},index;
    printf("We have this list of arrays in the system: \n");
    for(int i=0;i<4;i++)
    {
        printf("\t%d,",arr[i]);
    }
    printf("\nWhich Place's array you want to print: ");
    scanf("%d",&index); 
    int final_index=index-1;  
    printf("Do you want this?\n%d",arr[final_index]);
    
    return 0;
}