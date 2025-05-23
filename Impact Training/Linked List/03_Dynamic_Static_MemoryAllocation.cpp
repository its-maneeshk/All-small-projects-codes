#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* node1 = new Node();  // create a new node dynamically
    
    node1->data = 100;         // assign value
    node1->next = nullptr;     // it doesn't point to anything (yet)

    Node node2;
    node2.data = 200;
    node2.next = nullptr;
    
    cout << "Node data is: " << node1->data << endl;
    cout << "Node 2 data is: " << node2.data << endl;

    return 0;
}

/*
    Note:
    🔍 The Difference:
        Expression	Used When	                Example Code
        node.data	When node is not a pointer	Node node;
        node->data	When node is a pointer	    Node* node = new Node();

    🧠 What You Learned
        Node	Memory Type	Access Syntax   Description
        node1	Heap	                    node1->data	Pointer to a dynamically allocated Node
        node2	Stack	                    node2.data	Direct instance (automatic variable)
    
    ✅ Summary
        Node* node1 = new Node(); → Allocates memory on the heap.
        Node node2; → Allocates memory on the stack.
        -> is used to access members of a pointer.
        . is used to access members of an object.
        Always delete what you new.
*/





