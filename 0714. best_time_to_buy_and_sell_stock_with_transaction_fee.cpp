#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int f(vector<int>& prices, int i, bool hold, vector<vector<int>>& dp, int fee) {
        if (i>=prices.size()) return 0;
        
        if (hold && dp[i][0]!=-1) return dp[i][0];
        else if (!hold && dp[i][1]!=-1) return dp[i][1];
        
        if (i==prices.size()) return prices[i];
        if (hold) return dp[i][!hold] = max(prices[i]+f(prices, i+1, false, dp, fee), f(prices, i+1, true, dp, fee));
        else return dp[i][!hold] = max(-prices[i]-fee+f(prices, i+1, true, dp, fee), f(prices, i+1, false, dp, fee));
    }
    
    int maxProfit(vector<int>& prices, int fee) {
        vector<vector<int>> dp(prices.size(), vector<int> (2, -1));
        return f(prices, 0, false, dp, fee);
    }
};