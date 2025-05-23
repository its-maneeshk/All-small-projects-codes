#include<bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cin >> num;
    vector<int> vectorName;
    for(int i=0;i<num;i++) {
        int x;
        cin >> x;
        vectorName.push_back(x);
    }
    
    for(int c : vectorName) {
        cout << c << " ";
    }
    
}