#include<iostream>
using namespace std;

void reverse(string str) {
    string reverse ="";
    for(int i = str.length()-1; i>=0; i--) {
        reverse+= str[i];
    }
    cout<<reverse<<endl;
}

int main() {
    string m = "Hello World!";
    reverse(m);
    return 0;
}