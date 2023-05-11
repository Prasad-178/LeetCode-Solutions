#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector<bool> dp (nums.size(), false);
        dp[0] = true;
        for (int i=0; i<nums.size();  i++) {
            if (!dp[i]) continue;
            for (int j=1; j<=nums[i]; j++) {
                if (i+j<nums.size()) dp[i+j] = true;
            }
            if (dp[nums.size()-1]==true) return true;
        }
        
        return dp[nums.size()-1];
    }
};