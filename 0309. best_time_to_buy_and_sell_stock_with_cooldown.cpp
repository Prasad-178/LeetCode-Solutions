#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int f(vector<int>& prices, vector<vector<int>>& dp, int i, bool hold, int prevSale) {
        if (i >= prices.size()) return 0;
        if (i==prevSale+1 && !hold) return f(prices, dp, i+1, false, prevSale);
        
        if (dp[i][hold]!=-1) return dp[i][hold];
        
        if (hold) return dp[i][hold] = max(prices[i] + f(prices, dp, i+1, !hold, i), f(prices, dp, i+1, hold, prevSale));
        else return dp[i][hold] = max(-prices[i] + f(prices, dp, i+1, !hold, prevSale), f(prices, dp, i+1, hold, prevSale));
    }
    
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp (prices.size(), vector<int> (2, -1));
        return f(prices, dp, 0, false, -2);
    }
};