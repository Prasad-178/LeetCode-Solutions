#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    bool f(vector<int>& stones, unordered_map<int, int>& m, int index, int k, map<pair<int,int>, int>& dp) {
        if (index == stones.size()-1) return true;
        if (index >= stones.size() || index < 0) return false;
        if (k<0) return false;
        
        if (dp.find({index, k})!=dp.end()) return dp[{index, k}];
        
        bool jumpk=false, jumpkp1=false, jumpkm1=false;
        if (k!=0 && m.find(stones[index]+k)!=m.end()) jumpk = f(stones, m, m[stones[index]+k], k, dp);
        if (m.find(stones[index]+k+1)!=m.end()) jumpkp1 = f(stones, m, m[stones[index]+k+1], k+1, dp);
        if (m.find(stones[index]+k-1)!=m.end()) jumpkm1 = f(stones, m, m[stones[index]+k-1], k-1, dp);
        
        return dp[{index, k}] = jumpk || jumpkp1 || jumpkm1;
    }
    
    bool canCross(vector<int>& stones) {
        unordered_map<int, int> m;
        for (int i=0; i<stones.size(); i++) m.insert({stones[i], i});
        map<pair<int, int>, int> dp;
        return f(stones, m, 0, 0, dp);
    }
};