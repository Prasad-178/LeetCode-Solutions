#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    string longestPalindrome(string s) {
        vector <vector <bool>> dp (s.length(), vector <bool> (s.length(), false));
        
        for (int i=0; i<s.length(); i++) dp[i][i] = true;
        
        int maxi = 0;
        int maxifront = -1;
        int maxiback=-1;
        for (int i=s.length()-1; i>=0; i--) {
            for (int j=i+1; j<s.length(); j++) {
                if (i==j) dp[i][j] = true;
                else if (j==i+1 && s[i]==s[j]) dp[i][j] = true;
                else {
                    dp[i][j] = s[i]==s[j] && dp[i+1][j-1];
                }
                if (dp[i][j] == true) {
                    if (j-i+1 > maxi) {
                        maxifront = i;
                        maxiback = j;
                        maxi = j-i+1;
                    }
                }
            }
        }
        
        if (maxifront==-1) {
            string ans = "";
            ans += s[0];
            return ans;
        }
        
        string ans = "";
        for (int i=maxifront; i<=maxiback; i++) ans += s[i];
        
        return ans;
    }
};