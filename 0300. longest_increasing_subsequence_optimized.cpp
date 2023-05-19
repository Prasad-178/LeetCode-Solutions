#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int f(vector<int>& nums, vector<int>& dp, int i, int prev) {
        if (i>=nums.size()) return 0;
        
        if (dp[prev+1] != -1) return dp[prev+1];
        
        int choose = -1e7;
        if (prev==-1 || nums[i] > nums[prev]) 
            choose = 1 + f(nums, dp, i+1, i);
        int notChoose = f(nums, dp, i+1, prev);
        
        return dp[prev+1] = max(choose, notChoose);
    }
    
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp (nums.size()+1, -1);
        return f(nums, dp, 0, -1);
    }
};