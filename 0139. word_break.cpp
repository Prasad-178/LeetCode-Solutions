#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    bool f(string s, unordered_map<string, int>& m, int index, string temp, map<pair<string, int>, int>& dp, unordered_map<char, int>& start) {
        if (index > s.length()) return false;
        
        if (dp.find({temp, index}) != dp.end()) return dp[{temp, index}];
        
        temp.push_back(s[index]);
        if (start.find(temp[0]) == start.end()) return false;
        bool choose = false;
        if (m.find(temp) != m.end()) {
            if (index == s.length()-1) return true;
            choose = f(s, m, index+1, "", dp, start);
        }
        else {
            if (index == s.length()-1) return false;
        }
        
        return dp[{temp, index}] = choose || f(s, m, index+1, temp, dp, start);
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map <string, int> m;
        unordered_map <char, int> start;
        map <pair<string, int>, int> dp;
        for (auto &x: wordDict) {
            m[x]++;
            start[x[0]]++;
        }
        
        return f(s, m, 0, "", dp, start);
    }
};