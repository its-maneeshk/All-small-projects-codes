#include<stdio.h>

int main()
{
	int sum=0;
	for (int i = 0, j = 0; i<5 & j<5; ++i, j = i + 1)
//	for (int i = 0; i<5;++i)
	{
		sum+=i;
	}
	printf("Here: %d",sum);
	return 0;
}
