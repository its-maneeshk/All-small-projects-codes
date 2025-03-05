#include<stdio.h>
#include<stdlib.h>

int x=1;

int main()
{
    printf("Dynamic programming for Call and Relloc Function.");
    int* ptr,n1,n2;    int x=1,y=1,z=1,q=1;
    
    printf("No of element: ");
    scanf("%d",&n1);
    
    ptr=(int*)malloc(n1*sizeof(int));
    for(int i=0;i<n1;i++)
    {
        printf("Enter the element at place %d : ",x++);
        scanf("%d",&ptr[i]);
    }
    for(int j=0;j<n1;j++)
    {
        printf("Elemet at place %d is %d: \n",y++,ptr[j]);
    }
    
            //initializing new size of array
    printf("Enter the new size of array: ");
    scanf("%d",&n2);
    
    ptr=realloc(ptr,n2*sizeof(int));
    for(int k=0;k<n2;k++)
    {
        printf("Enter the new element at place %d : ",z++);
        scanf("%d",&ptr[k]);
    }
    for(int l=0;l<n2;l++)
    {
        printf("New Element at place %d is %d: \n",q++,ptr[l]);
    }
    
    return 0;
}