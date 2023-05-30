#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int f(vector<vector<int>>& pairs, vector<int>& dp, int index, int prev) {
        if (index >= pairs.size()) return 0;
        
        if (dp[prev+1] != -1) return dp[prev+1];
        
        int choose = -1e7;
        if (prev==-1 || pairs[index][0] > pairs[prev][1]) {
            choose = 1 + f(pairs, dp, index+1, index);
        }
        int notChoose = f(pairs, dp, index+1, prev);
        
        return dp[prev+1] = max(choose, notChoose);
    }
    
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), [](vector<int> v1, vector<int> v2) {
            return v1[0] < v2[0];
        });
        
        vector<int> dp (pairs.size()+1, -1);
        int prev = -1;
        return f(pairs, dp, 0, prev);
    }
};