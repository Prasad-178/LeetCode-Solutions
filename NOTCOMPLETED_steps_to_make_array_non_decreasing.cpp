#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool nonDecreasing(vector <int> nums)
    {
        int n = nums.size();
        for (int i=0; i<n-1; i++)
        {
            if (nums[i] > nums[i+1]) return false;
        }
        return true;
    }

    int totalSteps(vector<int>& nums) {
        int steps = 0, n = nums.size();
        while (!nonDecreasing(nums))
        {
            int i=0;
            while (i+1 < nums.size())
            {
                if (nums[i] > nums[i+1]) 
                {
                    nums.erase(nums.begin()+i);
                }
                else i++;
            }
            steps++;
        }

        return steps;
    }
};

int main() 
{
    Solution s;
    vector <int> nums = {5,3,4,4,7,3,6,11,8,5,11};
    cout << s.totalSteps(nums) << endl;   

    return 0;
}