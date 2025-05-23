#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter number: ";
    cin >> num;
    int odd = 2*num+1;
    if (odd & 1 != 1) {
        cout<< "Odd";
        return 0;
    }
    cout<< "even";
    
    
    

    return 0;
}