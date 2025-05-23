#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
}
Node* createNode(int val) {....
    Node *newnode = new Node();
    newnode -> data = value;
    newnode -> prev = NULL;
    newnode -> next = NULL;
}
void insertAtBeg(Node* &head, int value) {
    Node *newnode = createNode(value);
    if(head != null) {
        head -> prev = newnode;
    }
    newnode -> next = head;
    head = newnode;
cout << "Inserted at begining"<<endl;
}
void insertAtEnd(Node* &head, int value) {
    Node *newnode = createNode(value);
    if(head == NULL) {
        head = newnode;
    }else {
        Node *temp = head;
        while(temp->next != NULL) {
            temp = temp -> next;
        }
    }
}