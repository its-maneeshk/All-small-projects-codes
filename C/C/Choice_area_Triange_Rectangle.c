#include<stdio.h>

int main()
{
	int length, breadth, height, choice;
	printf("Welcome to the Geometric Area Calculator!\n");
	printf("Please select the shape:\n");
	printf("1. Rectangle\n");
	printf("2. Triangle\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
				printf("Enter the length and breadth of the rectangle:\n");
				printf("Length: ");
				scanf("%d", &length);
				printf("Breadth: ");
				scanf("%d", &breadth);
				printf("The area of Rectangle is: %d * %d = %d\n", length, breadth, length * breadth);
				break;
		case 2:
				printf("Enter the length, breadth, and height of the triangle:\n");
				printf("Length: ");
				scanf("%d", &length);
				printf("Breadth: ");
				scanf("%d", &breadth);
				printf("Height: ");
				scanf("%d", &height);
				printf("The area of Triangle is: %d * %d * %d = %d\n", length, breadth, height, (length * breadth * height)/2);
				break;
		default:
				printf("Sorry, you have entered the wrong value.\n");
			
	}

			
	return 0;
}
