#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int f(string &text1, string &text2, int i1, int i2, vector<vector<int>> &dp) {
        if (i1 < 0 || i2 < 0) return 0;
        
        if (dp[i1][i2] != -1) return dp[i1][i2];
        
        if (text1[i1] == text2[i2])
            return dp[i1][i2] = 1+f(text1, text2, i1-1, i2-1, dp);
        else
            return dp[i1][i2] = max(f(text1, text2, i1-1, i2, dp), f(text1, text2, i1, i2-1, dp));
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp (text1.length(), vector<int> (text2.length(), -1));
        return f(text1, text2, text1.length()-1, text2.length()-1, dp);
    }
};