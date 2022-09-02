#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int n = nums.size(), ct = 0;
        if (n==2) return true;  
        for (int i=0; i<n-1; i++)
        {
            if (nums[i] >= nums[i+1])
            {
                ct++;
                if (i != 0 && nums[i-1] >= nums[i+1])
                    nums[i+1] = nums[i];
            }
        }

        return (ct < 2);
    }
};

int main() 
{
    Solution s;
    vector <int> nums = {105, 924, 32, 968};
    cout << s.canBeIncreasing(nums) << endl;

    return 0;
}