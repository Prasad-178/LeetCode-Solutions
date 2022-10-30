#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int len = 0;
        int max = 0;
        
        unordered_map <char, int> m;
        for (int i=0; i<n; i++) {
            if (m.find(s[i]) != m.end()) {
                cout << "hi" << " ";
                if (len > max) {
                    max = len;
                }
                if (len + 1 < i - m[s[i]]) {
                    len = len+1;
                }
                else {
                    len = i - m[s[i]];
                }
                if (len > max) {
                    max = len;
                }
                cout << len << endl;
                m[s[i]] = i;
                continue;
            }
            m[s[i]] = i;
            len++;
            if (len > max) {
                max = len;
            }
        }
        
        return max;
    }
};