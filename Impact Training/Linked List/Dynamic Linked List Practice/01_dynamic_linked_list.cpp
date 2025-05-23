#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node();
    head -> data = 10;
    head -> next = new Node();

    head -> next -> data = 20;
    head -> next -> next = new Node();

    head -> next -> next -> data = 30;
    head -> next -> next -> next = new Node();

    head -> next -> next -> next -> data = 40;
    head -> next -> next -> next -> next = nullptr;

    Node* temp = head;
    while(temp != nullptr) {
        cout<<"Data: "<< temp -> data << endl;
        temp = temp -> next;
    }
    return 0;
}