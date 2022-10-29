#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size(), i;
        int sumLeft = 0, sumRight = 0;
        for (i=0; i<n; i++)
        {
            sumRight += nums[i];
        }
        i = 0;
        sumRight -= nums[0];
        while (i < n)
        {
            if (sumRight == sumLeft)
                return i;
            else 
            {
                i++;
                if (i != n)
                {
                    sumRight -= nums[i];
                    sumLeft += nums[i-1];   
                }
                else
                {
                    sumRight = 0;
                    sumLeft += nums[i-1];
                }
                
            }
        }
        return -1;
    }
};

int main() 
{
    Solution s;
    vector <int> nums = {2,3,-1,8,4};
    cout << s.findMiddleIndex(nums);

    return 0;
}