#include<stdio.h>

int main()
{
    int arr[7]={0,1,3,2,0,4,6},i,j,data;
    for(i=0;i<7;i++)
    {
        for(j=i+1;j<7;j++)
        {
            if(arr[i]<=arr[j])
            {
               data=arr[i];
               
            }
        }
    printf("%d\n",data);
    }



    return 0;
}
