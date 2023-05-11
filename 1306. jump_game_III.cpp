#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    bool f(vector<int>& arr, vector<int>& dp, int i, unordered_map<int, int>& m) {
        if (i>=arr.size()) return false;
        if (i<0) return false;
        if (arr[i]==0) return true;
        if (m[i]>1) return false;
        
        if (dp[i] != -1) return dp[i];
        
        m[i]++;
        
        int back = f(arr, dp, i-arr[i], m);
        return dp[i] = back || f(arr, dp, i+arr[i], m);
    }
    
    bool canReach(vector<int>& arr, int start) {
        vector<int> dp (arr.size(), -1);
        unordered_map<int, int> m;
        return f(arr, dp, start, m);
    }
};