#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0, temp=x, mod;
        if (x<0)
            return false;
        else if (x == 0)
            return true;
        else {
            while (temp > 0) {
                mod = temp % 10;
                rev = rev*10 + mod;
                temp /= 10;
            }
            cout << rev << endl;
            if (rev == x)
            {
                return true;
            }
            else
            {
                return false;
            }

        }
    }
};

int main() 
{
    Solution s;
    int x;
    cout << "Enter x : ";
    cin >> x;
    cout << s.isPalindrome(x) << endl;

    return 0;
}