#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), count, i=0;
        long long temp;
        while (i < n)
        {
            count = 0;
            temp = nums[i];
            while (nums[i] == temp)
            {
                count++;
                if (count > n/2) return temp;
                i++;
            }
        }
        return -1;
    }
};

int main()
{
    Solution s;
    vector <int> nums = {3, 2, 3};
    cout << s.majorityElement(nums) << endl;

    return 0;
}