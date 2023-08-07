#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    double knightProbability(int n, int moves, int row, int column) {
        vector <double> dp (moves+1, vector <double> (n, vector <double> (n, 0.0)));
        dp[0][row][column]=1;
        
        vector <pair<int, int>> jumps = {{1,2}, {2,1}, {1,-2}, {-2,1}, {-1,2}, {2,-1}, {-1,-2}, {-2,-1}};
        
        for (int k=1; k<moves+1; k++) {
            for (int i=0; i<n; i++) {
                for (int j=0; j<n; j++) {
                    for (int d=0; d<jumps.size(); d++) {
                        int updatedI = i - jumps[d].first;
                        int updatedJ = j - jumps[d].second;
                        
                        if (updatedI >=0 && updatedI < n && updatedJ >= 0 && updatedJ < n) {
                            dp[k][i][j] += dp[k-1][updatedI][updatedJ] / 8;
                        }
                    }
                }
            }
        }
        
        double ans = 0;
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                ans += dp[moves][i][j];
            }
        }
        
        return ans;
    }
};