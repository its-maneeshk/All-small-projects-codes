#include<iostream>

using namespace std;

int main() {
    int num1 = 5;
    int num2 = 543;

    string str1 = to_string(num1);
    string str2 = to_string(num2);
    
    // Since num1 is single digit
    int toNum = str1[0] - '0';
    
    cout<< toNum<<endl;
    
    // Since num2 has multiple digits.
    for(char ch : str2) {
        cout<< ch - '0' << " ";
    }
    
    return 0;
}
