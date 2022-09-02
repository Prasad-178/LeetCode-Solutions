#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size(), curIndex=-1;
        for (int i=0; i<n; i++)
        {
            if (nums[i] == 1)
            {
                curIndex = i;
                break;
            }
        }

        for (int i=curIndex+1; i<n; i++)
        {
            if (nums[i] == 1)
            {
                if (i-curIndex < k+1)
                    return false;
                else curIndex = i;
            }
        }
        return true;
    }
};

int main() 
{
    Solution s;
    vector <int> nums = {1,0,0,1,0,1};
    int k = 2;
    cout << s.kLengthApart(nums,k) << endl;

    return 0;
}