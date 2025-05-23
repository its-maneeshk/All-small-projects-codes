// Use a pointer to print all elements of an array using pointer arithmetic (*(p + i)).
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 12, 14, 15, 16};
    int* ptr = arr;  // Pointer to the first element of the array

    for (int i = 0; i < 5; i++) {
        cout << "Element at " << i + 1 << " is: " << *(ptr + i) << endl;  // Using pointer arithmetic
    }

    return 0;
}