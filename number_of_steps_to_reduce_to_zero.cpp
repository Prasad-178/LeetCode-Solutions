#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;
        while (num > 0)
        {
            if (num%2 == 0)
                num /= 2;
            else
                num--;

            steps++;
        }
        return steps;
    }
};

int main() 
{
    Solution s;
    int num = 14;
    cout << s.numberOfSteps(num) << endl;  

    return 0;
}