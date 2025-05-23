#include<bits/stdc++.h>
using namespace std;

void unsafeCount(int n, vector<vector<int>>& arr) {
    int zeroFound = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i >= n) {
                return;
            }
            if(arr[i][j] == 0) {
                zeroFound ++;
            }
        }
    }
    cout << "Unsafe zones cound: " << zeroFound << endl;
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
    
    unsafeCount(n, arr);
    return 0;
    
}

