#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int f(vector<vector<int>> &triangle, vector<vector<int>> &dp, int i, int j) {
         if (i>=triangle.size()) return 0;
        
        if (dp[i][j] != -1) return dp[i][j];
        
        int down = f(triangle, dp, i+1, j);
        return dp[i][j] = triangle[i][j] + min(down, f(triangle, dp, i+1, j+1));
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp = triangle;
        for (int i=0; i<triangle.size(); i++) {
            for (int j=0; j<i+1; j++) {
                dp[i][j] = -1;
            }
        }
        return f(triangle, dp, 0, 0);
    }
};