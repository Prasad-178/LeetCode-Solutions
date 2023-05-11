#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int f(vector<vector<int>> &matrix, vector<vector<int>> &dp, int i, int j) {
        if (i==matrix.size()-1 && j>=0 && j<=matrix.size()-1) return matrix[i][j];
        if (i>=matrix.size() || j>=matrix.size()) return 999999;
        if (i<0 || j<0) return 9999999;
        
        if (dp[i][j] != -1) return dp[i][j];
        
        int left = f(matrix, dp, i+1, j-1);
        
        return dp[i][j] = matrix[i][j] + min({left, f(matrix, dp, i+1, j), f(matrix, dp, i+1, j+1)});
    }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp (n, vector<int> (n, -1));
        
        int mini = 999999;
        for (int j=0; j<matrix.size(); j++) {
            mini = min(mini, f(matrix, dp, 0, j));
        }
        
        return mini;
    }
};