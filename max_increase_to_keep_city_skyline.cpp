#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size(), ans=0;
        vector <int> maxr(grid.size(),0), maxc(grid.size(),0);
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                maxr[i] = max(maxr[i], grid[i][j]);
                maxc[j] = max(maxc[j], grid[i][j]);
            }
        }
        
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                ans += min(maxr[i], maxc[j]) - grid[i][j];
            }
        }
        return ans;
    }
};

int main() 
{
    Solution s;
    vector<vector<int>> grid = {{3,0,8,4},{2,4,5,7},{9,2,6,3},{0,3,1,0}};
    cout << s.maxIncreaseKeepingSkyline(grid); 

    return 0;
}