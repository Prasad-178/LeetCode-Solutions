#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n<=0) return false;
        return ((n&(n-1))==0);
    }
};

int main() 
{
    Solution s;
    int n = 16;
    cout << s.isPowerOfTwo(n) << endl;

    return 0;
}