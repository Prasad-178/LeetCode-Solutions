#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        vector <int> dp (1e5, 0);
        int bias = 3*1e4;
        int maxi = 0;
        
        for (int i=0; i<arr.size(); i++) {
            dp[arr[i]+bias] = max(dp[arr[i]+bias], 1+dp[arr[i]+bias-difference]);
            maxi = max(maxi, dp[arr[i]+bias]);
        }
        
        return maxi;
    }
};