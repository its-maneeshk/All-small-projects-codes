#include<stdio.h>
int main()
{
int num,init=1;
printf("Enter any number: ");
scanf("%d",&num);
while(init<11)
{
    printf("%d*%d=%d\n",num,init,num*init);
    init++;
}

return 0;
}