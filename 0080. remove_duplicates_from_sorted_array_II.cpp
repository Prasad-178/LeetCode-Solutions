#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n==1 || n==2) return n;
        int i = 0;
        while (i+2 < nums.size())
        {
            if (nums[i] == nums[i+2]) 
                nums.erase(nums.begin()+i);
            else if (nums[i] == nums[i+1])
                i+=2; 
            else i++;
        }
        return nums.size();
    }
};

int main() 
{
    Solution s;
    vector<int> nums = {1,1,1,2,2,3};
    cout << s.removeDuplicates(nums) << endl;  

    return 0;
}