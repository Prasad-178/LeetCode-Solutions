#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    char repeatedCharacter(string s) {
        int arr[26] = {0}; char ans;
        for (int i=0; i<s.length(); i++)
        {
            arr[s[i]-'a']++;
            if (arr[s[i]-'a'] == 2) 
            {
                ans = s[i];
                break;
            }
        }
        return ans;
    }
};

int main() 
{
    Solution s;
    string str = "abccdeabcab";
    cout << s.repeatedCharacter(str);

    return 0;
}