#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int ans[n+1];
        
        ans[0] = 1;
        ans[1] = 1;
        
        for(int i = 2; i <= n; i++) ans[i] = ans[i-1] + ans[i-2];
        return ans[n];
    }
};

int main() 
{
    Solution s;
    int n = 40;
    cout << s.climbStairs(n) << endl;

    return 0;
}