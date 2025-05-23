#include <iostream>
using namespace std;

int main() {
    string str = "hello";
    string reversed(str.rbegin(), str.rend());  // Constructs reversed string
    cout << reversed << endl;  // Output: "olleh"
    return 0;
}
