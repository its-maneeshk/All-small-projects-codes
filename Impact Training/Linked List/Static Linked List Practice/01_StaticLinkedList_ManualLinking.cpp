// Create and manually link 3 static nodes
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node node1, node2, node3;
    
    node1.data = 10;
    node1.next = &node2;
    
    node2.data = 20;
    node2.next = &node3;
    
    node3.data = 30;
    node3.next = nullptr;
    
    cout<<"Node 1 Data: "<<node1.data<<endl;
    cout<<"Node 2 Data: "<<node1.next -> data <<endl;
    cout<<"Node 3 Data: "<<node2.next -> data <<endl;
    
    return 0;
}
