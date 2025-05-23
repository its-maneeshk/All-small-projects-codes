#include<iostream>
#include<string>
using namespace std;
int main() {
    int num;
    cin>>num;

    string numWord[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    string numStr = to_string(num);

    for(char ch : numStr) {
        int digit = ch - '0';
        cout << numWord[digit];
    }
}



x=4,y=3
int fun(x,y)
if(x equals 0)
return
Return fun(x-1,x+y)