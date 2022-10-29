#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        if (n==0) return 1;
        if (n==1) return x;
        if (n==-1) return 1/x;
        if (x==1) return 1;
        if (x==0) return 0;
        if (x==-1 && (abs(n))%2==0) return 1;
        if (x==-1 && (abs(n))%2 == 1) return -1;
        if (n < -17) return 0;
        if (n > 11) return myPow()
        if (n > 0)
        {
            while (n--)
            {
                ans *= x;
            }
            return ans;
        }
        else
        {
            while (n++)
            {
                ans /= x;
            }
            return ans;
        }
        
    }
};

int main() 
{
    Solution s;
    double x = -1;
    int n = 1;
    cout << s.myPow(x, n) << endl;

    return 0;
}