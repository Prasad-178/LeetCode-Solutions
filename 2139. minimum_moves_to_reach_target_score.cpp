#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        long long moves = 0;
        if (maxDoubles==0)
            return (target-1);
        
        while (target > 1)
        {
            if (maxDoubles == 0)
            {
                moves += target-1;
                break;
            }

            if (target%2 == 0)
            {
                if (maxDoubles > 0)
                {
                    target/=2;
                    maxDoubles--;
                }
            }
            else
            {
                target--;
            }
            moves++;
        }
        return moves;
    }
};

int main() 
{
    Solution s;
    int target = 19;
    int maxDoubles = 2;
    cout << s.minMoves(target, maxDoubles) << endl;  

    return 0;
}