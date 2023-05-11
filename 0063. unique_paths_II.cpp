#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int f(vector<vector<int>> &obstacleGrid, vector<vector<int>> &dp, int x, int y) {
        if (obstacleGrid[x][y]==1) return 0;
        if (x==0 && y==0) return 1;
        
        if (x==0) return f(obstacleGrid, dp, x, y-1);
        if (y==0) return f(obstacleGrid, dp, x-1, y);
        
        if (dp[x][y] != -1) return dp[x][y];
        
        return dp[x][y] = f(obstacleGrid, dp, x, y-1) + f(obstacleGrid, dp, x-1, y);
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>> dp (obstacleGrid.size(), vector<int> (obstacleGrid[0].size(), -1));
        return f(obstacleGrid, dp, obstacleGrid.size()-1, obstacleGrid[0].size()-1);
    }
};