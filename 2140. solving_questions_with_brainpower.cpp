#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    long long f(int index, vector<vector<int>> &questions, vector<long long> &dp) {
        if (index >= questions.size()) return 0;
        
        if (dp[index] != -1) return dp[index];
        
        long long choose = questions[index][0] + f(index+questions[index][1]+1, questions, dp);
        return dp[index] = max(choose, f(index+1, questions, dp));
    }
    
    long long mostPoints(vector<vector<int>>& questions) {
        vector <long long> dp(questions.size()+1, -1);
        return f(0, questions, dp);
    }
};