// ⚠️ Problem: stoi supports only up to 10 digitsf

#include<iostream>
#include<string>
using namespace std;

int main() {
    string str = "1230";

    int ans = stoi(str) + 1;

    cout << ans << endl;

    return 0;
}
