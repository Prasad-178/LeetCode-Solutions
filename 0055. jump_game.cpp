#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    bool f(vector<int>& nums, vector<int>& dp, int i) {
        if (i==nums.size()-1) return true;
        
        if (dp[i] != -1) return dp[i];
        
        bool check = false;
        for (int jump=1; jump<=nums[i]; jump++) {
            check = check || f(nums, dp, i+jump);
            if (check) return check;
        }
        
        return dp[i] = check;
    }
    
    bool canJump(vector<int>& nums) {
        vector<int> dp (nums.size(), -1);
        return f(nums, dp, 0);
    }
};