#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map <int,int> m;
        int len = nums.size(), ans=0;
        for (int i=0; i<len; i++) 
            m[nums[i]]++;

        // printing map key:value pairs
        for (auto &pr : m) 
            cout << pr.first << " " << pr.second << endl;

        for (auto pr : m)
        {
            if (pr.second > 1) 
                ans += (pr.second-1) * (pr.second) / 2;
        }
        return ans;
    }
};

int main() 
{
    Solution s;
    vector <int> nums = {1,1,1,1};
    cout << s.numIdenticalPairs(nums) << endl;

    return 0;
}