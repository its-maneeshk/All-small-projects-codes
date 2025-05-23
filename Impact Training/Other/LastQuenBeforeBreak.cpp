#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10, b = 20;

    cout << ((a + b) + abs(a - b)) / 2;       //for max
    cout << ((a + b) - abs(a - b)) / 2; //for min

    return 0;
}