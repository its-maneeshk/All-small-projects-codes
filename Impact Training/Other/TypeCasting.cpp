#include<bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cout<< ("Enter number: ");
    cin >>  num;

    if(num%3==0 and num%5 ==0) {
        cout<<"Completly divisible.";
        return 0;
    }

    if(num%3 == 0) {
        cout << "Only divisible by 3";
        return 0;
    }

    cout << "Only divisible by 5";


    return 0;
}