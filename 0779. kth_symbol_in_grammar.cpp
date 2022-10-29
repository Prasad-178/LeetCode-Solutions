#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    // string createString(string str, int temp, int n, int k)
    // {
    //     string tempstr = str;
    //     int len = str.length();
    //     for (int i=len/2; i<len; i++)
    //     {
    //         if (str[i] == '0')
    //         {
    //             tempstr = tempstr + "01";
    //         }
    //         else
    //         {
    //             tempstr = tempstr + "10";
    //         }

    //         if (tempstr.length() > k) return tempstr;
    //     }
    //     temp++;

    //     if (temp == n)
    //     {
    //         return tempstr;
    //     }
    //     else
    //     {
    //         return createString(tempstr, temp, n, k);
    //     }
    // }

    int kthGrammar(int n, int k) {
        int count = 0;
        if (k==1) return 0;
        if (k==2) return 1;

        while (k >= 8)
        {
            if (k%2==0)
            {
                k = k/2;
                count++;
            } 
            else k = (k+1)/2;
        }

        string str = "01101001";
        // string tempstr = createString(str, 2, n, k);
        int ans = str[k-1] - '0';
        if (count%2==1) 
        {
            if (ans==0) ans = 1;
            else ans = 0;
        }
        return ans;
    }
};

int main() 
{
    Solution s;
    int n = 20;
    int k = 641;
    cout << s.kthGrammar(n, k);

    return 0;
}