#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int f(string& s, int i1, int i2, vector<vector<int>>& dp) {
        if (i1 > i2) return 0;
        if (i1==i2) return 1;
        
        if (dp[i1][i2] != -1) return dp[i1][i2];
        
        if (s[i1]==s[i2]) return dp[i1][i2] = 2+f(s, i1+1, i2-1, dp);
        return dp[i1][i2] = max(f(s, i1+1, i2, dp), f(s, i1, i2-1, dp));
    }
    
    int longestPalindromeSubseq(string s) {
        vector<vector<int>> dp (s.length(), vector<int> (s.length(), -1));
        return f(s, 0, s.length()-1, dp);
    }
};