// solve more efficiently
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if (x==1) return 1;

        for (int i=0; i<=x/2; i++) {
            if (i*i == x) {
                return i;
            }
            else if (i*i < x && (i+1)*(i+1) > x) {
                return i;
            }
            else {
                continue;
            }
        }
        return -1;
    }
};

int main() 
{
    Solution s;
    int x = 64;
    cout << s.mySqrt(x) << endl;  

    return 0;
}