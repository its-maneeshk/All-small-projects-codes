#include<stdio.h>

struct node
{
    char name;
    int num;
    
    struct node* link;
};

int main()
{
    struct node node1,node2;
    
            //defining node 1 values
    node1.name='X';
    node1.num=50;
    node1.link=NULL;
            //defining node 2 values
    node2.name='Z';
    node2.num=60;
    node2.link=NULL;
    
    node1.link=&node2;
            //printing node1 values
    printf("name: %c\n",node1.name);
    printf("Number: %d\n",node1.num);
            //accessing node 2 values uning node 1
    printf("name: %c\n",node1.link->name);
    printf("Number: %d",node1.link->num);
    
    
    
    return 0;
}