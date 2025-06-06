#include<iostream>
using namespace std;

int withStaticKeyword(int value) {
    static int num = 0;
    num += value;
    return num;
}

int withoutStaticKeyword(int n) {
    int num = 0;
    num += n;
    return num;
}
int main() {
    // Calling functions
    cout << withStaticKeyword(1) << endl;
    cout << withStaticKeyword(4) << endl;
    cout << withStaticKeyword(1) << endl;
    
    // Calling functions
    cout << endl;
    cout << withoutStaticKeyword(1) << endl;
    cout << withoutStaticKeyword(4) << endl;
    cout << withoutStaticKeyword(1) << endl;
    
    // Calling functions
    // Here value of static num is hold that is (6) so * marked ans is updated to 7 i.e 6+1=7
    cout << endl;
    cout << withStaticKeyword(1) << '*' <<endl;
    cout << withStaticKeyword(4) << endl;
    cout << withStaticKeyword(1) << endl;
}