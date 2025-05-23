#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to insert at end
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

// Function to print the list
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
    int n, value;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " values:\n";
    for (int i = 0; i < n; ++i) {
        cin >> value;
        insertAtEnd(head, value);
    }

    cout << "\nLinked List is:\n";
    printList(head);

    return 0;
}
