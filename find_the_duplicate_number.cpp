#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int hash[n+2];
        for (int i=0; i<n+2; i++) hash[i]=0;
        for (int i=0; i<n; i++)
        {
            hash[nums[i]]++;
            if (hash[nums[i]] == 2) return nums[i];
        }
        return 0;
    }
};

int main() 
{
    Solution s;
    vector<int> nums = {1,3,4,2,2};
    cout << s.findDuplicate(nums) << endl;  

    return 0;
}