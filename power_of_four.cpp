#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n<=0) return false;

        if (log(n)/log(4) == floor(log(n)/log(4))) {
            return true;
        }
        else return false;

        return true;
    }
};

int main() 
{
    Solution s;
    int n = 1;
    cout << s.isPowerOfFour(n) << endl;

    return 0;
}