#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i=0; i<n; i++)
        {
            if (nums[i] != i) return i;
            else continue;
        }
        return n;
    }
};

int main() 
{
    Solution s;
    vector <int> nums = {3,0,1};
    cout << s.missingNumber(nums);

    return 0;
}