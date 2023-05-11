#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp = triangle;
        int n = triangle.size();
        
        for (int i=n-2; i>=0; i--) {
            for (int j=0; j<=i; j++) {
                int down = dp[i+1][j];
                int right = dp[i+1][j+1];
                dp[i][j] = triangle[i][j] + min(down, right);
            }
        }
        
        return dp[0][0];
    }
};