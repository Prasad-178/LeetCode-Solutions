#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length(), i=0;
        while (i < n)
        {
            if (!isalnum(s[i]) || s[i] == ' ')
            {
                s.erase(i,1);
                n--;
            }
            else
            {
                i++;
            }
        }
        
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        // cout << s << endl;

        int front = 0;
        int back = n-1;

        while (front < back)
        {
            if (s[front] == s[back])
            {
                front++;
                back--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};

int main() 
{
    Solution s;
    string str = " ";
    cout << s.isPalindrome(str) << endl;

    return 0;
}