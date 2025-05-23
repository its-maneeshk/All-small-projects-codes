#include <iostream>
#include <limits.h>  // For INT_MIN
using namespace std;

// Stack using array
class ArrayStack {
private:
    int* stack;       // Pointer to the array that holds stack elements
    int capacity;     // Maximum size of the stack
    int top;          // Index of the top element

public:
    // Constructor: initializes stack with given size
    ArrayStack(int size) {
        capacity = size;
        stack = new int[capacity];
        top = -1; // Stack is empty at the beginning
    }

    // Destructor: releases allocated memory
    ~ArrayStack() {
        delete[] stack;
    }

    // Add (push) an element onto the stack
    void push(int element) {
        if (top == capacity - 1) {
            cout << "Stack overflow! Cannot push " << element << endl;
        } else {
            stack[++top] = element;
            cout << "Pushed " << element << " to stack." << endl;
        }
    }

    // Remove (pop) the top element from the stack
    int pop() {
        if (top == -1) {
            cout << "Stack underflow! Nothing to pop." << endl;
            return INT_MIN;  // Returning a special value to indicate error
        } else {
            int poppedElement = stack[top--];
            cout << "Popped " << poppedElement << " from stack." << endl;
            return poppedElement;
        }
    }

    // Peek: view the top element without removing it
    int peek() const {
        if (top == -1) {
            cout << "Stack is empty! Nothing on top." << endl;
            return INT_MIN;
        } else {
            return stack[top];
        }
    }

    // Check if stack is empty
    bool isEmpty() const {
        return top == -1;
    }

    // Display all elements in the stack
    void display() const {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack elements (top to bottom): ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
};

// Main function to test the stack
int main() {
    int size = 4;
    ArrayStack myStack(size);

    // Pushing elements
    myStack.push(11);
    myStack.push(22);
    myStack.push(33);
    myStack.push(44);
    myStack.push(55); // Will cause overflow

    // Display current stack
    myStack.display();

    // Peek at the top element
    cout << "Top element is: " << myStack.peek() << endl;

    // Pop one element
    myStack.pop();

    // Display after popping
    myStack.display();

    // Peek again
    cout << "Top element after popping is: " << myStack.peek() << endl;

    return 0;
}
