#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int f(int x, int y, int m, int n, vector<vector<int>> &dp) {
        if (x==0 && y==0) return 1;
        if (x==0) return f(x, y-1, m, n, dp);
        if (y==0) return f(x-1, y, m, n, dp);
        
        if (dp[x][y] != -1) return dp[x][y];
        
        return dp[x][y] = f(x-1, y, m, n, dp) + f(x, y-1, m, n, dp);
    }
    
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return f(m-1, n-1, m, n, dp);
    }
};