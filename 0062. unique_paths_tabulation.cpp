// using tabulation
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp (m, vector<int> (n, -1));
        if (m<2 || n<2) return 1;
        if (m==2 && n==2) return 2;
        dp[0][0] = 1;
        dp[0][1] = 1;
        dp[1][0] = 1;
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (i==0 && j==0) continue;
                if (i==0 && j==1) continue;
                if (i==1 && j==0) continue;
                
                if (i==0 && j!=0) {
                    dp[i][j] = dp[i][j-1];
                    continue;
                }
                if (i!=0 && j==0) {
                    dp[i][j] = dp[i-1][j];
                    continue;
                }
                dp[i][j] = dp[i][j-1] + dp[i-1][j];
            }
        }
        
        return dp[m-1][n-1];
    }
};