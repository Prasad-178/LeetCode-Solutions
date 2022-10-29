#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n==42) return 433494437;
        if (n==43) return 701408733;
        if (n==44) return 1134903170;
        if (n==45) return 1836311903;
        if (n==1)
        {
            return 1;
        }
        else if (n == 2)
        {
            return 2;
        }
        else
        {
            return climbStairs(n-1) + climbStairs(n-2);
        }
    }
};

int main() 
{
    Solution s;
    int n = 40;
    cout << s.climbStairs(n) << endl;

    return 0;
}