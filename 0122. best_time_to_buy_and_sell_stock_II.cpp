#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int f(vector<int>& prices, int i, bool hold, vector<vector<int>>& dp) {
        if (i>=prices.size()) return 0;
        
        if (hold && dp[i][0]!=-1) return dp[i][0];
        else if (!hold && dp[i][1]!=-1) return dp[i][1];
        
        if (i==prices.size()) return prices[i];
        if (hold) return dp[i][0] = max(prices[i]+f(prices, i+1, false, dp), f(prices, i+1, true, dp));
        else return dp[i][1] = max(-prices[i]+f(prices, i+1, true, dp), f(prices, i+1, false, dp));
    }
    
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size(), vector<int> (2, -1));
        return f(prices, 0, false, dp);
    }
};