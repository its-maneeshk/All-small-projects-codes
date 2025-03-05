#include<stdio.h>

int main()
{
    int i,j,next=0,arr[4]={11,12,2,13};
    for(i=0;i<4;i++)
    {
        next=-1;
        for(j=i+1;j<4;j++)
        {
            if(arr[i]<arr[j])
            {
                next=arr[j];
                break;
            }
        }
    printf("%d is %d\n",arr[i],next);
    }



    return 0;
}