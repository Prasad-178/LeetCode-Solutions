#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        for (int i=0; i<32; i++) {
            if (n&1 == 1) {
                ans++;
            }
            else {}

            n = n>>1;
        }
        return ans;
    }
};

int main() 
{
    Solution s;
    uint32_t n = 2147483655;
    cout << s.hammingWeight(n) << endl;  

    return 0;
}