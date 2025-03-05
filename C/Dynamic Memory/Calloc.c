#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr,n;     int x=1,y=1;
    printf("No of element: ");
    scanf("%d",&n);
    
    ptr=(int*)calloc(n,sizeof(int));
    
    for(int i=0;i<n;i++)
    {
        printf("Enter the element at place %d: ",x++);
        scanf("%d",&ptr[i]);
    }
    for(int j=0;j<n;j++)
    {
        printf("The element at place %d is: %d\n",y++,ptr[j]);
    }
    free(ptr);
    
    
    return 0;
}