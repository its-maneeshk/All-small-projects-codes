#include<bits/stdc++.h>
using namespace std;

int markVisited(int n, vector<vector<int>>& arr) {
    int marked = -1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(arr[i][j] == 1) {
                arr[i][j] = marked;
            }
        }
    }
    return 0;
}
void display(int n, vector<vector<int>>& arr) {
    cout << endl << "Marking Visited with -1: "<<endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> arr(n, vector<int>(n));
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }
    cout << endl << "Initially: "<<endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    markVisited(n, arr);
    display(n, arr);
    
    return 0;
}

