#include<iostream>
using namespace std;

int recursion(int n) {
    if(n<=1)
        cout<<"Value of n is less than 2 : "<<n<<" ";

    return recursion(n-1);
}

int main() {
    int num;
    cin >> num;
    recursion(num);
}