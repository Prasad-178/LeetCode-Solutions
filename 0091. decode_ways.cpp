// edge cases not solved, so wrong submission
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int f(vector <int> &dp, string &s, int index) {
        if (index >= s.length()) return 1;
        if (index==s.length()-1) return 1;
        
        if (dp[index] != -1) return dp[index];
        
        if (s[index]=='1' || (s[index]=='2' && (s[index+1]=='0' || s[index+1]=='1' || s[index+1]=='2' || s[index+1]=='3' || s[index+1]=='4' || s[index+1]=='5' || s[index+1]=='6'))) {
            int chooseOne = f(dp, s, index+1);
            return dp[index] = chooseOne + f(dp, s, index+2);
        }
        
        return dp[index] = f(dp, s, index+1);
    }
    
    int numDecodings(string s) {
        if (s[0]=='0') return 0;
        
        vector<int> dp(s.length()+1, -1);
        return f(dp, s, 0);
    }
};