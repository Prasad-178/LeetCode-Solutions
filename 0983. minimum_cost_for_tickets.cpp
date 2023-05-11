#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int f(vector<int> &days, vector<int> &costs, vector<int> &dp, int lastDayCovered, int index) {
        if (index >= days.size()) return 0;
        if (days[index] <= lastDayCovered) return f(days, costs, dp, lastDayCovered, index+1);
        
        if (dp[index] != -1) return dp[index];
        
        return dp[index] = min(costs[0]+f(days, costs, dp, days[index], index+1), min(costs[1]+f(days, costs, dp, days[index]+6, index+1), costs[2]+f(days, costs, dp, days[index]+29, index+1)));
    }
    
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector <int> dp (days.size(), -1);
        return f(days, costs, dp, -1, 0);
    }
};