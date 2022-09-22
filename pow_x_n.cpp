#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        long p = labs(n);
        double ans = 1;
        while (p) {
            if (p%2) {
                ans *= x;
            }
            x *= x;
            p /= 2;
        }

        if (n>0) return ans;
        else return (1/ans);
    }
};

int main() 
{
    Solution s;
    double x = 2.0;
    int n = 3;
    cout << s.myPow(x,n) << endl;

    return 0;
}