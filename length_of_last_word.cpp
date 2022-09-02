#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length(), ans = 0;
        for (int i=n-1; i>=0; i--)
        {
            if (s[i] != ' ')
                ans++;
            else if (s[i] == ' ' && ans!= 0) break;
        }
        return ans;
    }
};

int main() 
{
    Solution s;
    string str = "   fly me   to   the moon  ";
    cout << s.lengthOfLastWord(str) << endl;

    return 0;
}