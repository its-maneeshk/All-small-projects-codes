// #include <iostream>
// #include <climits>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;

//     int a[n];
//     cout << "Enter array elements:\n";
//     for(int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     // Find the maximum and its index
//     int firstMax = INT_MIN, maxIndex = -1;
//     for(int i = 0; i < n; i++) {
//         if(a[i] > firstMax) {
//             firstMax = a[i];
//             maxIndex = i;
//         }
//     }

// -----------------------------------------------------------------------------
//     // Find the second maximum
//     int secondMax = INT_MIN;
//     for(int i = 0; i < n; i++) {
//         if(i != maxIndex && a[i] > secondMax) {
//             secondMax = a[i];
//         }
//     }

//     if (secondMax == INT_MIN)
//         cout << "No second maximum (all elements may be equal).\n";
//     else
//         cout << "Second max: " << secondMax << endl;

//     return 0;
// }
// --------------------------------------------------------------------------------------------
//LARGEST ELEMENT IN ARRAY
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int size,k;
//     int max = 0;
//     int flag = 0;
//     cout<< "Enter size: ";
//     cin >> size;
//     cout<< "K'th max element: ";
//     cin >> k;
//     int arr[size];
//     for(int i=0; i<size; i++) 
//     cin >> arr[i];
//     for(int j=0; j<size; j++) {
//         if(max < arr[j]) {
//             max = arr[j];
//         }
//     }
//     cout << "Max element: " <<max;

// }
// -----------------------------------------------

#include<bits/stdc++.h>
using namespace std;
int main() {
    int size;
    cout << "Size: ";
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }
    
    int firstMax = INT_MIN;
    for(int i=0; i<size;i++) {
        if(arr[i] > firstMax) {
            firstMax = arr[i];
        }
    }
    cout << "firstMax element: " <<firstMax << endl;
    
    int secondMax = INT_MIN;
    for(int i=0; i<size; i++) {
        if(arr[i] != firstMax && arr[i] > secondMax) {
            secondMax = arr[i];
        }
    }
    cout << "secondMax element: " <<secondMax << endl;
    
    int thirdMax = INT_MIN;
    for(int i=0; i<size; i++) {
        if(arr[i] > thirdMax && arr[i] != firstMax && arr[i] != secondMax) {
            thirdMax = arr[i];
        }
    }
    cout << "thirdMax element: " << thirdMax;
}