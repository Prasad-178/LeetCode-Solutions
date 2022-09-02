#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        int temp = columnNumber, len, countzero = 0;
        vector <int> v;
        while (temp > 0)
        {
            v.push_back(temp%26);
            temp /= 26;
        }

        len = v.size();
        for (int i=len-1; i>=0; i--) cout << v[i] << endl;

        for (int i=len-1; i>=0; i--)
        {
            if (v[i] != 0) ans.push_back('A'+v[i]-1);
            else
            {
                ans[ans.length()-1] = 'Z'-v[i];
                countzero++;
            } 
        }
        if (countzero<=1) return ans;
        else
        {
            for (int i=0; i<countzero-1; i++) ans.insert(0, "Y");
        }
        return ans;
    }
};

int main() 
{
    Solution s;
    int columnNumber = 26;
    cout << s.convertToTitle(columnNumber);

    return 0;
}