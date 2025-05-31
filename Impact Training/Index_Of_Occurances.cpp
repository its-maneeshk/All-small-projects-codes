// num = [0,1,2,1,2,5,4,3,5]; Targer = 5;
#include<bits/stdc++.h>
using namespace std;

vector<int> occuranceIndex(vector<int>& nums, int target) {
    int start = -1, end = -1;
    for(int i=0; i<nums.size(); i++) {
        if(nums[i] == target) {
            if(start == -1) {
                start = i;
            }
            end = i;
        }
    }
    return {start, end};
};
int main() {
    vector<int> nums = {0,1,2,1,2,5,4,3,5};
    int target = 40;
    vector<int> result = occuranceIndex(nums, target);
    for(auto& num : result) {
        cout  << num << " ";
    }
    return 0;

}