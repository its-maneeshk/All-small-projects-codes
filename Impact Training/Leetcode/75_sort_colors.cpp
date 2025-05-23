/*
iven an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
 
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    int sortColors(vector<int>& nums) {
        int n = nums.size();
        int countZero = 0, countOne = 0, countTwo = 0;
        for(int num : nums) {
            if(num > 2) return -1;
            else if(num == 0) return countZero++;
            else if(num == 1) return countOne++;
            else return countTwo++;
        }
    }
}

int main() {
    vector<int> vect = {2,0,2,1,1,0};
    Solution obj;
    int result = obj.sortColors(vect);
    cout << result << endl;
    
}