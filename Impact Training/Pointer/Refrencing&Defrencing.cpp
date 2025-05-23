#include<iostream>
using namespace std;
int main() {
    int *a,b;
    b = 10;
    a = &b;
    
    cout<<"The value of b is: "<<b<<endl;
    cout<<"The address of b is: "<<a<<endl;
    cout<<"The value of b is: "<<*a<<endl;
}