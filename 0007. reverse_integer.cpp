#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int flag = 0;
        if (x<0) flag = 1;
        int rev = 0, temp = abs(x);
        while (temp > 0)
        {
            if (rev > 214748364) return 0;
            rev = rev*10;
            rev = rev + temp%10;
            temp = temp/10;
        }
        if (flag == 0 && rev < 0)
            return 0;
        
        if (flag == 1) rev *= -1;
        cout << rev << endl;
        return rev;
    }
};

int main() 
{
    Solution s;
    int x = 2147483647;
    // cout << INT32_MIN << endl;
    // cout << INT32_MAX << endl;
    cout << s.reverse(x) << endl;

    return 0;
}