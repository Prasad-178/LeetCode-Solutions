#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool checkIncreasing(vector<int> nums, int index)
    {
        nums.erase(nums.begin() + index);
        int n = nums.size();
        for (int i=0; i<n-1; i++)
        {
            if (nums[i] >= nums[i+1]) return false;
        }
        return true;
    }

    bool canBeIncreasing(vector<int>& nums) {
        int n = nums.size();
        for (int i=0; i<n; i++)
        {
            if (checkIncreasing(nums,i))
                return true;
        }
        return false;
    }
};

int main() 
{
    Solution s;
    vector <int> nums = {105, 924, 32, 968};
    cout << s.canBeIncreasing(nums) << endl;

    return 0;
}