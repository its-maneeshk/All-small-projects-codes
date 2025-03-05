#include<stdio.h>

int main()
{
	int firstValue, secondValue;
	printf("Welcome to the Personalized Swapping Program!\n");
	printf("Enter the first value: ");
	scanf("%d", &firstValue);
	printf("Enter the second value: ");
	scanf("%d", &secondValue);
	
	// Swapping the values without using a temporary variable
	firstValue = firstValue + secondValue;
	secondValue = firstValue - secondValue;
	firstValue = firstValue - secondValue;
	
	printf("After swapping the numbers: %d %d\n", firstValue, secondValue);
	
	return 0;
}
