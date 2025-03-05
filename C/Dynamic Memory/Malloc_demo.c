#include<stdio.h>
#include<stdlib.h>

int main()
{
    int* ptr, numElements;
    int placeCounter = 1;
    
    printf("Welcome to the Personalized Dynamic Array Program!\n");
    printf("Enter the number of elements: ");
    scanf("%d", &numElements);
    
    ptr = (int*)malloc(numElements * sizeof(int));
    
    if(ptr == NULL) {
        printf("Memory allocation failed. Exiting program.\n");
        return -1; // Returning -1 to indicate failure
    }
    
    printf("Enter %d values:\n", numElements);
    for(int i = 0; i < numElements; i++)
    {
        printf("Enter the value at place %d: ", placeCounter++);
        scanf("%d", &ptr[i]);
    }
    
    printf("Values entered:\n");
    for(int j = 0; j < numElements; j++)
    {
        printf("The value at place %d is: %d\n", j + 1, ptr[j]);
    }
    
    // Free dynamically allocated memory to prevent memory leaks
    free(ptr);
    
    return 0;
}
