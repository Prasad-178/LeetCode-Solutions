#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int f(vector<int> &cost, int index, vector<int>& dp) {
        if (index == -1) return min(f(cost, 0, dp), f(cost, 1, dp));
        if (index >= cost.size()) return 0;
        
        if (dp[index] != -1) return dp[index];
        
        return dp[index] = cost[index]+min(f(cost, index+1, dp), f(cost, index+2, dp));
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp (cost.size(), -1);
        return f(cost, -1, dp);
    }
};