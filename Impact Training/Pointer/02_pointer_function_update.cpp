// Write a function update(int* p) that increases the value by 5 using the pointer.
#include<iostream>
using namespace std;
void update(int* p) {
    *p += 5;
}
int main() {
    int value;
    cout<<"Enter Value: ";
    cin >> value;
    
    int* ptr;
    ptr = &value;
    
    update(ptr);
    cout <<"Updated value using pointer: " << value << endl;
   
}