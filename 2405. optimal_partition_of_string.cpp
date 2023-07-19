#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int partitionString(string s) {
        int ct=0;
        vector <int> thresh (26, 1);
        unordered_map <char, int> m;
        vector <char> ja = {};
        
        for (int i=0; i<s.length(); i++) {
            if (m[s[i]] == thresh[s[i]-97]) {
                
                thresh[s[i]-97]++;
                for (int i=0; i<ja.size(); i++) m[ja[i]]--;
                m[s[i]]++;
                ja.clear();
                
                ct++;
            }
            ja.push_back(s[i]);
            m[s[i]]++;
        }
        ct++;
        
        return ct;
    }
};