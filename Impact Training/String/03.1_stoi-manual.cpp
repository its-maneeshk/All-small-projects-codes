#include <iostream>
using namespace std;

int main() {
    string str = "123";
    int num = 0;
    for (char ch : str) {
        num = num * 10 + (ch - '0');
    }
    cout << num << endl; // Output: 123
    return 0;
}
