#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i=0; i<n-1; i++)
        {
            if (nums[i] == nums[i+1])
                return nums[i];
        }
        return 1;
    }
};

int main() 
{
    Solution s;
    vector<int> nums = {1,3,4,2,2};
    cout << s.findDuplicate(nums) << endl;  

    return 0;
}