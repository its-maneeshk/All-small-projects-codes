#include<stdio.h>

typedef struct
{
	int start;
	int end;
} Interval;

void mergeIntervals(Interval intervals[], int size)
{
	if(size<=0) 
	return;
	
	Interval stack[size];
	int top = -1;
	
	
	stack[++top] = intervals[0];
	
	for (int i=1;i<=size;i++)
	{
		Interval current =intervals[i];
		
		if(current.start<=stack[top].end)
		{
			if (current.start>stack[top].end)
			stack[top].end=current.end;
		}
		else
		{
			stack[++top]=current;
		}
	}
	printf("Merged intervals \n");
}
{
	
	
	return 0;
}
