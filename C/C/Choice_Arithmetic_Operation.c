#include<stdio.h>
#include<string.h>

int main()
{
	int num1, num2;
	char ch[10]; // Increased size to accommodate longer input
	printf("Welcome to the Personalized Calculator Program!\n");
	printf("Please Enter Two Values:\n");
	scanf("%d%d", &num1, &num2);
	printf("Choose the operation to perform:\n");
	printf("Type 'add' for Addition\n");
	printf("Type 'sub' for Subtraction\n");
	printf("Type 'mul' for Multiplication\n");
	printf("Type 'div' for Division\n");
	scanf("%s", ch);

	if(strcmp(ch, "add") == 0)
		printf("Value after Addition: %d\n", num1 + num2);
	else if(strcmp(ch, "sub") == 0)
		printf("Value after Subtraction: %d\n", num1 - num2);
	else if(strcmp(ch, "mul") == 0)
		printf("Value after Multiplication: %d\n", num1 * num2);
	else if(strcmp(ch, "div") == 0)
	{
		if (num2 == 0)
			printf("Error! Division by zero is not allowed.\n");
		else
			printf("Value after Division: %d\n", num1 / num2);
	}
	else
		printf("Sorry! You've entered an invalid operation.\n");

	return 0;
}
