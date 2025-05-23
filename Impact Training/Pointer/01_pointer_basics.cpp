// Declare an int variable a = 15, a pointer to a, and print a, &a, ptr, and *ptr.
#include<iostream>
using namespace std;
int main() {
    int a, *ptr;
    a = 15;
    ptr = &a;
    
    cout<<"Value of a: "<<a<<endl;
    cout<<"Address of a: "<<&a<<endl;
    cout<<"Pointer address of a: "<<ptr<<endl;
    cout<<"Dereferencing ptr (value of a): "<<*ptr<<endl;
   
}