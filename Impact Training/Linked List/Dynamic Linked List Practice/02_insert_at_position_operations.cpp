#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtBeginning(Node* &head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node* &head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void insertAtPosition(Node* &head, int value, int position) {
    if (position == 0) {
        insertAtBeginning(head, value);
        return;
    }

    Node* newNode = new Node();
    newNode->data = value;

    Node* temp = head;
    for (int i = 0; i < position - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Position out of bounds!" << endl;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;

    insertAtBeginning(head, 10); // 10
    insertAtEnd(head, 30);       // 10 -> 30
    insertAtPosition(head, 20, 1); // 10 -> 20 -> 30
    insertAtPosition(head, 5, 0);  // 5 -> 10 -> 20 -> 30

    printList(head);

    return 0;
}
