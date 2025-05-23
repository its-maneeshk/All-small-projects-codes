#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n != 0) {
        int result = n / 10;
        cout << result << "  ";
    }

    return 0;
}