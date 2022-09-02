#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector <string> ans = {};
        unordered_map <int, string> m;
        m.insert({2, "abc"});
        m.insert({3, "def"});
        m.insert({4, "ghi"});
        m.insert({5, "jkl"});
        m.insert({6, "mno"});
        m.insert({7, "pqrs"});
        m.insert({8, "tuv"});
        m.insert({9, "wxyz"});

        int len = digits.length();
        if (len == 0)
        {
            return ans;
        }

        else if (len == 1)
        {
            int len1 = m[digits[0]-48].length();
            
            for (int i=0; i<len1; i++)
            {
                string add = "a";
                char ch1 = m[digits[0]-48][i];
                add[0] = ch1;
                ans.push_back(add);
            }
        }

        else if (len == 2)
        {
            int len1 = m[digits[0]-48].length();
            int len2 = m[digits[1]-48].length();

            for (int i=0; i<len1; i++)
            {
                for (int j=0; j<len2; j++)
                {
                    string add = "ab";
                    char ch1 = m[digits[0]-48][i];
                    char ch2 = m[digits[1]-48][j];
                    add[0] = ch1;
                    add[1] = ch2;
                    ans.push_back(add);
                }
            }
        }

        else if (len == 3)
        {
            int len1 = m[digits[0]-48].length();
            int len2 = m[digits[1]-48].length();
            int len3 = m[digits[2]-48].length();

            for (int i=0; i<len1; i++)
            {
                for (int j=0; j<len2; j++)
                {
                    for (int k=0; k<len3; k++)
                    {
                        string add = "abc";
                        char ch1 = m[digits[0]-48][i];
                        char ch2 = m[digits[1]-48][j];
                        char ch3 = m[digits[2]-48][k];
                        add[0] = ch1;
                        add[1] = ch2;
                        add[2] = ch3;
                        ans.push_back(add);
                    }
                }
            }
        }

        else
        {
            int len1 = m[digits[0]-48].length();
            int len2 = m[digits[1]-48].length();
            int len3 = m[digits[2]-48].length();
            int len4 = m[digits[3]-48].length();

            for (int i=0; i<len1; i++)
            {
                for (int j=0; j<len2; j++)
                {
                    for (int k=0; k<len3; k++)
                    {
                        for (int l=0; l<len4; l++)
                        {
                            string add = "abcd";
                            char ch1 = m[digits[0]-48][i];
                            char ch2 = m[digits[1]-48][j];
                            char ch3 = m[digits[2]-48][k];
                            char ch4 = m[digits[3]-48][l];
                            add[0] = ch1;
                            add[1] = ch2;
                            add[2] = ch3;
                            add[3] = ch4;
                            ans.push_back(add);
                        }
                    }
                }
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    string digits = "2347";
    vector <string> ans;
    ans = s.letterCombinations(digits);
    int len = ans.size();
    cout << "The letter combinations for the given string are : " << endl;
    for (int i=0; i<len; i++) cout << ans[i] << " ";

    return 0;
}