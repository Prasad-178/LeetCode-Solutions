#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int f(vector<int>& coins, int amount, vector<vector<int>>& dp, int index) {
        if (amount==0) return 1;
        if (amount < 0) return 0;
        if (index>=coins.size()) return 0;
        
        if (dp[index][amount] != -1) return dp[index][amount];
        
        int choose = f(coins, amount-coins[index], dp, index);
        int notChoose = f(coins, amount, dp, index+1);
        
        return dp[index][amount] = choose + notChoose;
    }
    
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp (coins.size(), vector<int> (amount+1, -1));
        return f(coins, amount, dp, 0);
    }
};