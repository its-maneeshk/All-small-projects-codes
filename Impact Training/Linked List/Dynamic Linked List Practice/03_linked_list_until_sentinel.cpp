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

// Function to delete the list and free memory
void deleteList(Node* &head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Node* head = nullptr;
    int value;

    cout << "Enter values to insert into the linked list (enter -1 to stop):\n";
    while (true) {
        cin >> value;
        if (value == -1) break;
        insertAtEnd(head, value);
    }

    cout << "\nLinked List is:\n";
    printList(head);

    // Clean up memory
    deleteList(head);

    return 0;
}
