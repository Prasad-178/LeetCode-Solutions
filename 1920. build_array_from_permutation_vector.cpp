#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector <int> ans(nums.size());
        int i=0;
        while (i < nums.size()) {
            ans[i] = nums[nums[i]];
            i++;
        }

        return ans;
    }
};

int main() 
{
    Solution s;
    vector <int> v{0, 2, 1, 5, 3, 4};
    vector <int> ans = s.buildArray(v);

    for (int i = 0; i < 6; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}