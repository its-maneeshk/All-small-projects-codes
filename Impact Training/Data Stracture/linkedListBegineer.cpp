#include <iostream>
using namespace std;

// Node structure: each node has data and a pointer to the next node
struct Node {
    int data;
    Node* next;
};

// Singly Linked List class
class SinglyLinkedList {
private:
    Node* head; // Points to the first node

public:
    // Constructor: list is empty at the beginning
    SinglyLinkedList() {
        head = nullptr;
    }

    // Add a node at the end of the list
    void insertAtEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode; // If list is empty
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next; // Traverse to the last node
            }
            temp->next = newNode;
        }
        cout << "Inserted " << value << " at the end." << endl;
    }

    // Add a node at the beginning of the list
    void insertAtBeginning(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head; // New node points to old head
        head = newNode;       // Update head
        cout << "Inserted " << value << " at the beginning." << endl;
    }

    // Delete a node by value
    void deleteByValue(int value) {
        if (head == nullptr) {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }

        // If head node holds the value
        if (head->data == value) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            cout << "Deleted " << value << " from the list." << endl;
            return;
        }

        // Search for the node before the one to delete
        Node* current = head;
        while (current->next != nullptr && current->next->data != value) {
            current = current->next;
        }

        if (current->next == nullptr) {
            cout << "Value " << value << " not found in the list." << endl;
        } else {
            Node* toDelete = current->next;
            current->next = current->next->next;
            delete toDelete;
            cout << "Deleted " << value << " from the list." << endl;
        }
    }

    // Search for a value
    bool search(int value) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == value) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    // Display all elements of the list
    void display() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }
        Node* temp = head;
        cout << "Linked list: ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

// Main function to test the linked list
int main() {
    SinglyLinkedList list;

    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);

    list.display();

    list.insertAtBeginning(5);
    list.display();

    list.deleteByValue(20);
    list.display();

    int searchValue = 30;
    if (list.search(searchValue)) {
        cout << "Value " << searchValue << " found in the list." << endl;
    } else {
        cout << "Value " << searchValue << " not found." << endl;
    }

    return 0;
}
