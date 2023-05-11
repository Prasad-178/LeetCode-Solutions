#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    bool f(vector<int>& nums, vector<vector<int>> &dp, int sum, int i) {
        if (sum==0) return true;
        if (sum < 0) return false;
        if (i<0) return false;
        
        if (dp[i][sum] != -1) return dp[i][sum];
        
        bool choose = f(nums, dp, sum-nums[i], i-1);
        return dp[i][sum] = choose || f(nums, dp, sum, i-1);
    }
    
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (int i=0; i<nums.size(); i++) {
            sum += nums[i];
        }
        
        if (sum%2 != 0) return false;
        
        vector<vector<int>> dp (nums.size(), vector<int> (sum+1, -1));
        return f(nums, dp, sum/2, nums.size()-1);
    }
};