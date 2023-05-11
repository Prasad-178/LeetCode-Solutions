#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int f(vector<int>& prices, int i, bool hold, vector<vector<vector<int>>>& dp, int alreadyDone, int k) {
        if (hold && i==prices.size()-1) return prices[i];
        if (i>=prices.size()) return 0;
        if (alreadyDone >= k) return 0;
        
        if (hold && dp[i][0][alreadyDone]!=-1) return dp[i][0][alreadyDone];
        else if (!hold && dp[i][1][alreadyDone]!=-1) return dp[i][1][alreadyDone];
        
        if (i==prices.size()) return prices[i];
        if (hold) return dp[i][!hold][alreadyDone] = max(prices[i]+f(prices, i+1, false, dp, alreadyDone+1, k), f(prices, i+1, true, dp, alreadyDone, k));
        else return dp[i][!hold][alreadyDone] = max(-prices[i]+f(prices, i+1, true, dp, alreadyDone, k), f(prices, i+1, false, dp, alreadyDone, k));
    }
    
    int maxProfit(int k, vector<int>& prices) {
        vector<vector<vector<int>>> dp(prices.size(), vector<vector<int>> (2, vector<int> (k, -1)));
        return f(prices, 0, false, dp, 0, k);
    }
};