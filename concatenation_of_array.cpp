#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        for (int i=0; i<n; i++)
            nums.push_back(nums[i]);
        return nums;
    }
};

int main() 
{
    Solution s;
    vector <int> nums = {1, 2, 1};
    vector <int> ans = s.getConcatenation(nums);

    int n = ans.size();
    for (int i=0; i<ans.size(); i++)
        cout << ans[i] << " ";
        
    cout << endl;

    return 0;
}