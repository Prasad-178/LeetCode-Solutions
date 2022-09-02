#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int len = nums.size(), i, temp;
        int rear  = len - 1;
        int front = rear - 1;

        
        
    }
};

int main()
{
    Solution s;
    vector <int> nums = {1, 2, 4, 3, 4};
    s.nextPermutation(nums);

    for (int i=0; i<nums.size(); i++) cout << nums[i] << " ";
}