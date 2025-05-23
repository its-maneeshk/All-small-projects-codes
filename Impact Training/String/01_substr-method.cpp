#include<iostream>
#include<string>
using namespace std;

int main() {
    string str = "Once a brown dog jump over the gray box.";

    cout<<"Printing from 2nd index to last : ";
    string custom1 = str.substr(2);
    cout << custom1 << endl;

    cout<<"Printing from 7th index to and 3 elements : ";
    string custom2 = str.substr(7,3);
    cout << custom2 << endl;

    cout<<"Printing from 2nd index and 6 elements : ";
    string custom3 = str.substr(2,6);
    cout << custom3 << endl;


    return 0;
}