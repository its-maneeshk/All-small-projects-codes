// N=6, {6,8,0,1,3,5}
#include<iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    int arr[N];
    int result[N];
    
    for(int i=0; i<N;i++) {
        cin>>arr[i];
    }
    for(int i=0; i<N;i++) {
        result[i] = -1;
    }
    for(int i=0; i<N-1;i++) {
        for(int j=i+1;j<N;j++) {
            if(arr[i]<arr[j]) {
                result[i] = arr[j];
                break;
            }
            
        }
    }
    for(int i=0; i<N;i++) {
        cout<<result[i]<<" ";
    }
    
}