#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* node1 = new Node();  // dynamically create a Node
    node1->data = 100;
    node1->next = nullptr;

    cout << "Node data is: " << node1->data << endl;

    delete node1;  // free heap memory

    return 0;
}
