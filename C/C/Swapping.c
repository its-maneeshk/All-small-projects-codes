#include<stdio.h>

int main()
{
	int firstValue, secondValue, temp;
	printf("Welcome to the Value Swapping Program!\n");
	printf("Enter the first value: ");
	scanf("%d", &firstValue);
	printf("Enter the second value: ");
	scanf("%d", &secondValue);
	
	// Swapping the values
	temp = secondValue;
	secondValue = firstValue;
	firstValue = temp;
	
	printf("Values after swapping: %d %d\n", firstValue, secondValue);
	
	return 0;
}
