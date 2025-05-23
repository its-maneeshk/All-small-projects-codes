#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node node1, node2, node3, node4; //node1, node2 & node... is objects of type Node which create copy of Node for their each one
    
    node1.data = 10;
    node1.next = &node2;
    
    node2.data = 20;
    node2.next = &node3;
    
    node3.data = 30;
    node3.next = &node4;
    
    node4.data = 40;
    node4.next = nullptr;
    
    cout<<"Node 1 data: "<< node1.data <<endl;
    cout<<"Node 2 data: "<< node1.next -> data <<endl;
    cout<<"Node 3 data: "<<(*node2.next).data <<endl;
    cout<<"Node 3 data: "<< node3.next -> data <<endl;
    return 0;
}

/*
- Why?
    node1.next gives you a pointer to the next node.
    *node1.next dereferences that pointer (gets the actual object).
    (*node1.next).data accesses the data field of that object.
    The arrow -> is shorthand for doing both * and . in one step.
    -> is the pointer member access operator, shorthand for dereferencing a pointer and accessing a member.
    (*ptr).member is the equivalent but more verbose way to do the same.

    Note:
    🔍 The Difference:
        Expression	Used When	                Example Code
        node.data	When node is not a pointer	Node node;
        node->data	When node is a pointer	    Node* node = new Node();
*/