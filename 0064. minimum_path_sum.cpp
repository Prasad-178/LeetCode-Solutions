#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int f(vector<vector<int>> &grid, vector<vector<int>> &dp, int x, int y) {
        if (x==0 && y==0) return grid[0][0];
        
        if (x==0) return grid[x][y] + f(grid, dp, x, y-1);
        if (y==0) return grid[x][y] + f(grid, dp, x-1, y);
        
        if (dp[x][y] != -1) return dp[x][y];
        
        return dp[x][y] = grid[x][y] +  min(f(grid, dp, x, y-1), f(grid, dp, x-1, y));
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size(), vector<int> (grid[0].size(), -1));
        return f(grid, dp, grid.size()-1, grid[0].size()-1);
    }
};