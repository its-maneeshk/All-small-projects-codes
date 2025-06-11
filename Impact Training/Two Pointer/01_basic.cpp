#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1,0,0,0,1,0,1,1};
    int left = 0, right = arr.size()-1;
    while(left < right) {
        while(arr[left] == 1 && left < right) left++;
        while(arr[right] == 0 && left < right) right--;
        if(left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
    
    for(int x : arr) {
        cout << x << " ";
    }
}