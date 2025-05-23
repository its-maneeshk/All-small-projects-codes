#include<iostream>
#include<algorithm>
using namespace std;

void reverse(string str) {
    reverse(str.begin(), str.end());
    cout<<str<<endl;
}

int main() {
    string m = "Hello World!";
    reverse(m);
    return 0;
}