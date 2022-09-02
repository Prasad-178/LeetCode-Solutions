#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector <int> ans;
        int n = nums.size();
        for (int i=0; i<n; i++)
        {
            if (nums[i] < pivot)
                ans.push_back(nums[i]);
        }

        for (int i=0; i<n; i++)
        {
            if (nums[i] == pivot)
                ans.push_back(nums[i]);
        }

        for (int i=0; i<n; i++)
        {
            if (nums[i] > pivot)
                ans.push_back(nums[i]);
        }

        for (int i=0; i<n; i++)
        {
            nums[i] = ans[i];
        }
        ans.clear();

        return nums;
    }
};

int main() 
{
    Solution s;

    vector <int> nums = {-3,4,3,2};
    int pivot = 2;

    vector <int> ans = s.pivotArray(nums, pivot);

    for (auto &it : ans) cout << it << " ";
    cout << endl;

    return 0;
}