#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        vector <vector<int>> dp (s1.length(), vector<int> (s2.length(), 0));
        
        int as1=0, as2=0;
        for (int i=0; i<s1.length(); i++) as1 += s1[i];
        for (int i=0; i<s2.length(); i++) as2 += s2[i];
        
        if (s1[0]==s2[0]) dp[0][0] = (int)s1[0];
        for (int i=1; i<s1.length(); i++) {
            if (s1[i]==s2[0]) dp[i][0] = max(dp[i-1][0], (int)s1[i]);
            else dp[i][0] = dp[i-1][0];
        }
        
        for (int j=1; j<s2.length(); j++) {
            if (s1[0]==s2[j]) dp[0][j] = max(dp[0][j-1], (int)s2[j]);
            else dp[0][j] = dp[0][j-1];
        }
        
        for (int i=1; i<s1.length(); i++) {
            for (int j=1; j<s2.length(); j++) {
                if (s1[i] == s2[j]) dp[i][j] = (int)s1[i] + dp[i-1][j-1];
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        return as1 + as2 - 2*dp[s1.length()-1][s2.length()-1];
    }
};