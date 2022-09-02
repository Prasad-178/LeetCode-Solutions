#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        vector <int> arr_a, arr_b, ans;
        int a_len = a.length();
        int b_len = b.length();
        string ansstr = "";
        for (int i=0; i<a_len; i++)
        {
            arr_a.push_back(a[i]-48);
        }
        for (int i=0; i<b_len; i++)
        {
            arr_b.push_back(b[i]-48);
        }

        while (arr_a.size() < a_len + 2) arr_a.insert(arr_a.begin(), 0);
        while (arr_b.size() < a_len + 2) arr_b.insert(arr_b.begin(), 0);    

        for (int i=0; i<arr_a.size(); i++) ans.push_back(arr_a[i] + arr_b[i]);
        
        for (int i=ans.size()-1; i>=0; i--)
        {
            if (ans[i] == 2)
            {
                if (i==0)
                {
                    ans.insert(ans.begin(), 1);
                    ans[i+1] = 0;
                }
                else
                {
                    ans[i-1] += 1;
                    ans[i] = 0;
                }
            }
            else if (ans[i] == 3)
            {
                if (i==0)
                {
                    ans.insert(ans.begin(), 1);
                    ans[i+1] = 1;
                }
                else
                {
                    ans[i-1] += 1;
                    ans[i] = 1;
                }
            }
            else {}
        }

        if (ans[0] == 0) ans.erase(ans.begin());
        if (ans[0] == 0) ans.erase(ans.begin());

        for (int i=0; i<ans.size(); i++) ansstr.push_back(ans[i] + 48);

        return ansstr;
    }
};

int main() 
{
    Solution s;
    string a = "100";
    string b = "110010";
    string ans = s.addBinary(a, b);

    for (int i=0; i<ans.size(); i++) cout << ans[i] << "";

    return 0;
}