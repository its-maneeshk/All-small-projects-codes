/*
    5
    3 
    Ram 40
    Shyam 10
    Rahul 90
    Sita 60
    Sheela 70
    -----------
    output
    Rahul 90
    Sheela 70
    Sita 60
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    // int numOfData; cin >> numOfData;
    map<string,int> mapping;
    for(int i=0; i<n; i++) {
        string name; int marks;
        cin >> name >> marks;
        mapping[name] = marks;
        
    }
    for(const auto& pair : mapping) {
        cout << pair.first << " -> "<<pair.second<<endl;
    }

    return 0;
}