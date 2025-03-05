#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    printf("Program to find the next greater number with the same set of digits");
    char num[20];

    printf("Enter a number: ");
    scanf("%s", num);

    int len = strlen(num);
    int i, j;

    // Step 1: Find the rightmost digit 'i' such that num[i] < num[i+1]
    for (i = len - 2; i >= 0; i--) {
        if (num[i] < num[i + 1]) {
            break;
        }
    }

    // If no such digit is found, it's not possible to find the next greater number
    if (i == -1) {
        printf("Not Possible\n");
        return 0;
    }

    // Step 2: Find the smallest digit to the right of 'i' that is greater than num[i]
    for (j = len - 1; j > i; j--) {
        if (num[j] > num[i]) {
            break;
        }
    }

    // Step 3: Swap num[i] and num[j]
    swap(&num[i], &num[j]);

    // Step 4: Sort all digits to the right of 'i' in ascending order
    for (int left = i + 1, right = len - 1; left < right; left++, right--) {
        swap(&num[left], &num[right]);
    }

    printf("The next greater number with the same set of digits is: %s\n", num);

    return 0;
}
