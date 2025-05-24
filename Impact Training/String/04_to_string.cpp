/*
    No, you cannot directly cast an int to a string using (string)ans in C++.
    That kind of C-style casting works for primitive types like (float)int,
    but not for converting between int and string. C++ will give a compile-time error if you try:
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int num = 123;
    string str = to_string(num);
    cout << "String is: " << str << endl; // Output: String is: 123
    return 0;
}
