#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    string addOne(string s)
    {
        int carry=1;
        for (int i=s.length()-1; i>=0; --i)
        {
            if (carry == 0) break;

            if (s[i] == '1')
                s[i] = '0';
            else
            {
                s[i] = '1';
                carry = 0;
            }
        }

        if (carry==1)
            s.insert(s.begin(),'1');

        return s;
    }

    int numSteps(string s) {
        int steps = 0;
        // cout << s << endl;
        while (s.length() > 1)
        {
            // char leastSigChar = s[s.length()-1];
            // cout << leastSigChar << endl;
            if (s[s.length()-1] == '0')
            {
                s.erase(s.end()-1);
                // cout << s << endl;
            }
            else if (s[s.length()-1] == '1')
            {
                s = addOne(s);
                // cout << s << endl;
            }
            steps++;
        }
        return steps;
    }
};

int main() 
{
    Solution s;
    string str = "1101";
    cout << s.numSteps(str) << endl;  

    return 0;
}