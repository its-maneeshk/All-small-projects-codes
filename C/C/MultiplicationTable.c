#include<stdio.h>

int main()
{
	int num;
	printf("Welcome to the Personalized Multiplication Table Generator!\n");
	printf("Which number's multiplication table do you want? \n");
	scanf("%d", &num);
	printf("Multiplication table of %d:\n", num);
	for(int i = 1; i < 11; i++)
	{
		printf("%d * %d = %d\n", num, i, num * i);	
	}

	return 0;
}
