#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int numEmpty = 0;
        int sum = 0;
        do {
            sum += numBottles;
            numEmpty += numBottles;
            numBottles = 0;
            if (numEmpty < numExchange) {
                break;
            }
            numBottles = numEmpty/numExchange;
            numEmpty = numEmpty%numExchange;
        }
        while (numEmpty >= numExchange || numBottles > 0);
        
        return sum;
    }
};

int main() 
{
    

    return 0;
}