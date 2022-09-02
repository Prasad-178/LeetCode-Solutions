#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto low = lower_bound(nums.begin(), nums.end(), target);
        cout << *low << endl;
        auto high = upper_bound(nums.begin(), nums.end(), target);

        if (low == nums.end() || *low != target) return {-1, -1};

        int begin = low - nums.begin();
        int end = high - nums.begin() - 1;

        return {begin,end};
    }
};

int main()
{
    Solution s;
    vector <int> nums = {1};
    int target = 0;
    vector <int> ans = s.searchRange(nums, target);

    for (int i=0; i<ans.size(); i++)
    {
        cout << ans[i] << " "; 
    }
}