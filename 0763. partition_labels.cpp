#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map <char, int> m;
        for (int i=0; i<s.length(); i++) {
            m[s[i]]=i;
        }
        
        vector <int> ans = {};
        
        int maxi = 0;
        for (int i=0; i<s.length(); i++) {
            maxi = max(maxi, m[s[i]]);
            if (i==maxi) ans.push_back(i+1);
            else continue;
        }
        
        for (int i=ans.size()-1; i>=1; i--) {
            ans[i] -= ans[i-1];
        }
        
        return ans;
    }
};