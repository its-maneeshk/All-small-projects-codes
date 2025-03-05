#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr,size;
    printf("How many element you want to store\n");
    scanf("%d",&size);
    
    ptr=(int*)malloc(size*sizeof(int));

            /* There's a possibility that the memory allocation can fail, 
            usually due to insufficient available memory. When this happens, malloc returns a special value called NULL */
    if(ptr==NULL)  
    {
        printf("Memory allocation Failed");
        return 1;
    }
    
    printf("You can enter %d elements\n",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("The values you entered: \n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",ptr[i]);
    }
    
    
    
    return 0;
}