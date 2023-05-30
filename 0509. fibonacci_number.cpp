#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int fib(int n) {
        if (n==0) return 0;
        if (n==1) return 1;
        int prev2 = 0;
        int prev = 1;
        int cur;
        for (int i=2; i<=n; i++) {
            cur = prev+prev2;
            prev2 = prev;
            prev = cur;
        }
        
        return cur;
    }
};