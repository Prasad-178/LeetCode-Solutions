#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    int f(int amount, vector<int> &coins, vector<int> &dp) {
        if (amount==0) return 0;
        
        if (dp[amount] != -1) return dp[amount];
        
        int mini = pow(10, 7);
        for (int i=coins.size()-1; i>=0; i--) {
            if (amount - coins[i] >= 0) {
                mini = min(mini, f(amount-coins[i], coins, dp));
            }
        }
        
        return dp[amount] = 1 + mini;
    }
    
    int coinChange(vector<int>& coins, int amount) {
        if (amount==0) return 0;
        vector<int> dp(amount+1, -1);
        for (int i=0; i<coins.size(); i++) {
            if (coins[i] < amount) {
                dp[coins[i]] = 1;
            }
        }
        
        int ans = f(amount, coins, dp);
        if (ans>pow(10,7)) return -1;
        return ans;
    }
};

int main() {

    return 0;
}