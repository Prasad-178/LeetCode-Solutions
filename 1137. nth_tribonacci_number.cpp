#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int tribonacci(int n) {
        if (n==0) return 0;
        if (n==1) return 1;
        if (n==2) return 1;
        int prev2=0, prev1=1, prev0=1, cur;
        for (int i=3; i<=n; i++) {
            cur = prev0+prev1+prev2;
            prev2=prev1;
            prev1=prev0;
            prev0=cur;
        }
        
        return cur;
    }
};