#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int binarySearch(vector <int> nums, int lower, int upper, int element)
{
    if (upper >= lower)
    {
        int mid = lower + (upper - lower) / 2;

        if (nums[mid] == element)
        {
            return (mid);
        }

        else if (element > nums[mid])
        {
            return (binarySearch(nums, mid + 1, upper, element));
        }

        else
        {
            return (binarySearch(nums, lower, mid - 1, element));
        }
    }

    return -1;
}

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lower = 0, result, upper = nums.size() - 1, lrange, rrange;
        if (nums.size() == 0) return {-1, -1};
        if (nums.size() == 1 && nums[0] != target) return {-1, -1};
        if (nums.size() == 1 && nums[0] == target) return {0, 0};
        if (nums[0] == nums[upper] && target == nums[0]) return {0, upper};
        
        result = binarySearch(nums, lower, upper, target);
        cout << "result is : " << result << endl;
        if (result == -1) return {-1, -1};
        else
        {
            lrange = rrange = result;
            while (nums[lrange] == target) lrange--;
            while (nums[rrange] == target) rrange++;
        }

        return {lrange+1, rrange-1};
    }
};

int main()
{
    Solution s;
    vector <int> nums = {2, 2};
    int target = 1;
    vector <int> ans = s.searchRange(nums, target);

    for (int i=0; i<ans.size(); i++)
    {
        cout << ans[i] << " "; 
    }
}