#include<iostream>
using namespace std;

void withStatic() {
    static int count = 0;
    count++;
    cout << count << endl;
}

void withoutStatic() {
    int count = 0;
    count++;
    cout << count << endl;
}
int main() {
    withStatic();
    withStatic();
    withStatic();
        cout << endl;
    withoutStatic();
    withoutStatic();
    withoutStatic();

}