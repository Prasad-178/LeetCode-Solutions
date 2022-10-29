#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int len = 2*n;
        vector <int> temp;
        for (int i=0; i<len; i++)
        {
            if (i%2==0) temp.push_back(nums[i/2]);
            else temp.push_back(nums[len/2 + i/2]);
        }

        for (int i=0; i<len; i++) nums[i] = temp[i];
        temp.clear();

        return nums;
    }
};

int main() 
{
    Solution s;
    vector <int> nums = {1, 2, 3, 4, 5, 6, 7, 8};
    nums = s.shuffle(nums, 4);
    for (int i=0; i<nums.size(); i++) cout << nums[i] << " ";

    return 0;
}