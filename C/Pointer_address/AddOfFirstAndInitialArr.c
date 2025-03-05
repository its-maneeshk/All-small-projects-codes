#include<stdio.h>

int main()
{
                                                    //used %p for Pointer address and %u for unsigned value means size of an array
    int x[5];
    printf("Address of X is %p\n",&x);          //pointer of initial array and array at x[0] is same 
    for(int i=0;i<5;i++)                                //coz initial array contain the pointer address of x[0]  
    {
        printf("Address of X[%d] is %p\n",i,&x[i]);
    }
    
    
    return 0;    
}
