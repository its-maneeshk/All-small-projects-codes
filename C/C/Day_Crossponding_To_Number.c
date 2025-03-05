#include<stdio.h>

int main()
{
	int num;
	printf("Welcome to the Personalized Day Finder!\n");
	printf("Please enter a number from 1 to 7 to get the corresponding day:\n");
	scanf("%d",&num);
	printf("The day is ");
	switch(num)
	{
		case 1:
			printf("Sunday");
			break;
		case 2:
			printf("Monday");
			break;
		case 3:
			printf("Tuesday");
			break;
		case 4:
			printf("Wednesday");
			break;
		case 5:
			printf("Thursday");
			break;
		case 6:
			printf("Friday");
			break;
		case 7:
			printf("Saturday");
			break;
		default:
			printf("Sorry, you've entered an invalid value. Please enter a number from 1 to 7.");
	}
	
	return 0;
}
