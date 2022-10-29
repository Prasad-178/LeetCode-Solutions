#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        if(a.size() < b.size()) return addBinary(b, a);
        
        int sizediff = a.size()-b.size();
        while(sizediff) 
        {
            b = "0" + b;
            sizediff--;
        }
        string ans = "";
        int carry = 0;
        
        int i = a.size()-1, j = b.size()-1;
        
        while(i >= 0 or j >= 0) 
        {
            int sum = (a[i] - '0') + (b[j] - '0') + carry;
            if(sum == 3) 
            {
                ans = "1" + ans;
                carry = 1;
            }
            else if(sum == 2) 
            {
                ans = "0" + ans;
                carry = 1;
            }
            else 
            {
                ans = to_string(sum) + ans;
                carry = 0;
            }
            i--;
            j--;
        }
        
        if(carry == 1) ans = "1" + ans;
        
        return ans;
    }
};

int main() 
{
    Solution s;
    string a = "100";
    string b = "110";
    string ans = s.addBinary(a, b);

    for (int i=0; i<ans.size(); i++) cout << ans[i] << "";

    return 0;
}