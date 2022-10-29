#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    vector <string> v = {};
    void bt(int n, string output, int i, int open, int close) {
        if (i == 2*n) {
            v.push_back(output);
            return;
        }
        
        if (open == close) {
            output.push_back('(');
            bt(n, output, i+1, open+1, close);
        }
        
        if (close < open) {
            if (open < n) {
                output.push_back('(');
                bt(n, output, i+1, open+1, close);
                output.pop_back();
                output.push_back(')');
                bt(n, output, i+1, open, close+1);
            }
            else {
                output.push_back(')');
                bt(n, output, i+1, open, close+1);
            }
        }
    }
    
    vector<string> generateParenthesis(int n) {
        string output = "";
        bt(n, output, 0, 0, 0);
        return v;
    }
};