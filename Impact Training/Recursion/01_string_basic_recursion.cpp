#include<iostream>
using namespace std;

// Recursion starts from last. if n = 6 loop starts from 6;
void stringRec(int n) {
    if(n == 0) return;  //return exits the function used on void function;
    cout<<n<<" Hello world!" <<endl;
    stringRec(n-1);
}

int main() {
    stringRec(6);
    return 0;
}