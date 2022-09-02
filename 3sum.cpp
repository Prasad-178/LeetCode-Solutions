#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        if (nums.size() < 3)
            return ans;

        for (int i=0; i<n-1; i++)
        {
            int l = i+1;
            int h = n-1;
            int thirdElem = -1*nums[i];

            if (i>0 && nums[i] == nums[i-1]) continue;
            while (l < h)
            {
                if (nums[l] + nums[h] == thirdElem)
                {
                    vector <int> temp = {nums[l], nums[i], nums[h]};
                    ans.push_back(temp);
                    while (l < h && nums[l] == nums[l+1]) l++;
                    while (l < h && nums[h] == nums[h-1]) h--;
                    l++;
                    h--; 
                }
                else if (nums[l] + nums[h] < thirdElem)
                    l++;
                else
                    h--;
            }
        }
        return ans;
    }
};

int main() 
{
    Solution s;
    vector <int> nums = {-1,0,1,2,-1,4};
    vector <vector<int>> ans = s.threeSum(nums);  

    return 0;
}