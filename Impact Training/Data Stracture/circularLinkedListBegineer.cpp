#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Circular linked list class
class CircularLinkedList {
private:
    Node* tail;  // Tail helps in accessing both head and last node easily

public:
    // Constructor
    CircularLinkedList() {
        tail = nullptr;
    }

    // Insert at end
    void insertAtEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;

        if (tail == nullptr) {
            // First node creation
            newNode->next = newNode;
            tail = newNode;
        } else {
            newNode->next = tail->next;  // Point to head
            tail->next = newNode;        // Old tail points to new node
            tail = newNode;              // New node becomes new tail
        }
        cout << "Inserted " << value << " at end." << endl;
    }

    // Insert at beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node();
        newNode->data = value;

        if (tail == nullptr) {
            newNode->next = newNode;
            tail = newNode;
        } else {
            newNode->next = tail->next;  // New node points to head
            tail->next = newNode;        // Tail points to new node (new head)
        }
        cout << "Inserted " << value << " at beginning." << endl;
    }

    // Delete by value
    void deleteByValue(int value) {
        if (tail == nullptr) {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }

        Node* current = tail->next; // Start from head
        Node* prev = tail;

        do {
            if (current->data == value) {
                if (current == tail && current->next == tail) {
                    // Only one node
                    delete current;
                    tail = nullptr;
                } else {
                    prev->next = current->next;
                    if (current == tail)
                        tail = prev;  // Update tail if last node is deleted
                    delete current;
                }
                cout << "Deleted value " << value << " from the list." << endl;
                return;
            }
            prev = current;
            current = current->next;
        } while (current != tail->next);

        cout << "Value " << value << " not found in the list." << endl;
    }

    // Display the circular list
    void display() {
        if (tail == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        Node* temp = tail->next; // Start from head
        cout << "Circular Linked List: ";
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != tail->next);
        cout << "(back to head)" << endl;
    }
};

// Main function to test the circular linked list
int main() {
    CircularLinkedList clist;

    clist.insertAtEnd(10);
    clist.insertAtEnd(20);
    clist.insertAtEnd(30);
    clist.display();

    clist.insertAtBeginning(5);
    clist.display();

    clist.deleteByValue(20);
    clist.display();

    clist.deleteByValue(100);  // Try deleting a non-existent value

    return 0;
}
