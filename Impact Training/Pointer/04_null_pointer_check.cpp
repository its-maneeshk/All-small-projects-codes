#include <iostream>
using namespace std;

int main() {
    // Declare a null pointer (points to no valid memory)
    int* ptr = nullptr;  // modern C++ null pointer

    if (ptr == nullptr) {
        cout << "This Null Pointer is NULL" << endl;
    } else {
        cout << "This Null Pointer is NOT NULL" << endl;
    }

    /*
    NOTE:
    - A null pointer does NOT point to any valid memory address.
    - Its stored value is a special constant (nullptr) representing "no address".
    - Dereferencing a null pointer (*ptr) causes undefined behavior or crash.
    */
    
    return 0;
}
