// This program performs swapping, arranging in ascending order, finding the value in array, if not found what will be index if inserted.
#include <stdio.h>

int main() {
    printf("This program performs swapping, arranging in ascending order, finding the value in array, if not found what will be index if inserted.");
    int n, temp, targetVal;
    printf("What will be the number of input?\n>>> ");
    scanf("%d",&n);
    int arr[n];
    printf("then enter %d Values.\n 1st value >> ",n);
    
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
        if(i<n-1) {
            printf(" %dnd Value >> ",i+2);
        }
        else {
            break;
        }
    }
    
    printf("\n");
    printf("Values you've entered: ");
    printf("{");
    for(int j=0; j<n; j++) {
        printf("%d",arr[j]);
        if(j<n-1) {
            printf(",");
        }
        else {
            break;
        }
    }
    printf("}");
    
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Printing the sorted array
    printf("\nArranging in Ascending Order: {");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if(i<n-1) {
            printf(",");
        }
        else {
            break;
        }
    }
    printf("}\n");
    
    printf("Enter Target Value: ");
    scanf("%d",&targetVal);
    for(int i=0; i<n; i++) {
        if(targetVal == arr[i]) {
            printf("Target Found at index: %d",i+1);
            break;
        }
        else {
            if(targetVal < arr[i]) {
                printf("Value not found in array. Moving Forward...\n");
                printf("if inserted it will be found at index %dth", i+1);     
                break;
            }
            else if (targetVal > arr[i] && targetVal < arr[i+1]) {
                printf("Value not found in array. Moving Forward...\n");
                printf("if inserted it will be found at index %dth", i+2);
                break;
            }
        }
    }
    
    return 0;
}