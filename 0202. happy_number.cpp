#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        int count = 0;
        int temp = n;
        while (1) {
            int sumSq = 0;
            while (temp > 0) {
                sumSq += (temp%10)*(temp%10);
                temp /= 10;
            }
            count++;
            if (sumSq == 1) {
                return true;
            }
            if (count > 10000) {
                return false;
            }
            temp = sumSq;
        }
        return false;
    }
};

int main() 
{
    Solution s;
    int n = 111;
    cout << s.isHappy(n) << endl;

    return 0;
}