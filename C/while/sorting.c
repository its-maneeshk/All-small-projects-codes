#include<stdio.h>

int main()
{
    int arr[6]={0,1,3,2,0,4,6},i,j;
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(arr[i]<arr[j] || arr[i]==arr[j])
            {
                int data=arr[i];
            }
        }
    printf("%d\n",arr[i]);
    }



    return 0;
}