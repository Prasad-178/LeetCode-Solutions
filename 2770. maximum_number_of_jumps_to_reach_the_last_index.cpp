#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int f(vector<int>& nums, int target, int curi, int previ, vector<int> &dp) {
        if (previ == nums.size()-1) return 0;
        if (curi >= nums.size()) return -1e9;
        
        if (dp[previ] != -1) return dp[previ];
        
        int choose=-1e9, notChoose=-1e9;
        if (abs(nums[curi] - nums[previ]) <= target) {
            choose = 1 + f(nums, target, curi+1, curi, dp);
        }
        notChoose = f(nums, target, curi+1, previ, dp);
        
        return dp[previ] = max(choose, notChoose);
    }
    
    int maximumJumps(vector<int>& nums, int target) {
        vector <int> dp (nums.size(), -1);
        int ans = f(nums, target, 1, 0, dp);
        if (ans < 0) return -1;
        return ans;
    }
};