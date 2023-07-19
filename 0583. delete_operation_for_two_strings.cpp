#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int f(string word1, string word2, int i, int j, vector<vector<int>>& dp) {
        if (i>=word1.length()) return 0;
        if (j>=word2.length()) return 0;
        
        if (dp[i][j] != -1) return dp[i][j];
        
        if (word1[i] == word2[j]) return dp[i][j] = 1 + f(word1, word2, i+1, j+1, dp);
        return dp[i][j] = max(f(word1, word2, i+1, j, dp), f(word1, word2, i, j+1, dp));
    }
    
    int minDistance(string word1, string word2) {
        vector<vector<int>> dp (word1.length(), vector<int> (word2.length(), -1));
        int lcs = f(word1, word2, 0, 0, dp);
        return word1.length()+word2.length()-2*lcs;
    }
};