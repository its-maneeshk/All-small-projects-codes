#include<stdio.h>

int main()
{
	int num;
	printf("Enter any number from 1 to 7 to get crossponding day:\n");
	scanf("%d",&num);
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
			printf("Thrusday");
			break;
		case 6:
			printf("Friday");
			break;
		case 7:
			printf("Saturday");
			break;
		default:
			printf("Sorry!! You've entered the wrong value :(");
	}
	
	return 0;
}
