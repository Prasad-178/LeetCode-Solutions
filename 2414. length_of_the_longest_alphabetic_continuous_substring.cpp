#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int longestContinuousSubstring(string s) {
        int maxi = 1;
        int cur = 1;
        for (int i=1; i<s.length(); i++) {
            if (s[i]==s[i-1]+1) cur++;
            else cur=1;
            
            maxi = max(maxi, cur);
        }
        
        return maxi;
    }
};