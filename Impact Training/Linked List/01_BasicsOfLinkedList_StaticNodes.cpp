#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node node1, node2; //node1 & node2 is objects of type Node

    node1.data = 10;
    node1.next = &node2;   // node1 points to node2

    node2.data = 20;
    node2.next = nullptr;  // node2 is the last node

    cout << "Node 1 data: " << node1.data << endl;
    cout << "Node 2 data: " << node1.next->data << endl; // Access node2 via node1.next

    return 0;
}
