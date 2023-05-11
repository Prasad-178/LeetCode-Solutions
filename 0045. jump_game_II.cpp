#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int> dp (nums.size(), 99999);
        
        dp[0] = 0;
        for (int i=0; i<nums.size(); i++) {
            for (int j=1; j<=nums[i]; j++) {
                if (i+j<dp.size()) dp[i+j] = min(dp[i+j], 1+dp[i]);
            }
        }
        
        return dp[dp.size()-1];
    }
};