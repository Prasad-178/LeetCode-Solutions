#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int f(string &word1, string &word2, int i1, int i2, vector<vector<int>>& dp) {
        if (i1==0) return i2;
        if (i2==0) return i1;
        
        if (dp[i1][i2] != -1) return dp[i1][i2];
        
        if (word1[i1-1] == word2[i2-1]) return dp[i1][i2] = f(word1, word2, i1-1, i2-1, dp);
        return dp[i1][i2] = min({1 + f(word1, word2, i1-1, i2-1, dp), 1 + f(word1, word2, i1-1, i2, dp), 1 + f(word1, word2, i1, i2-1, dp)});
    }
    
    int minDistance(string word1, string word2) {
        vector<vector<int>> dp (word1.size()+1, vector<int> (word2.size()+1, -1));
        return f(word1, word2, word1.size(), word2.size(), dp);
    }
};