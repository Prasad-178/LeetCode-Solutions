#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        vector <int> dp (nums.size(), 1);
        vector <int> count (nums.size(), 1);
        
        for (int i=1; i<nums.size(); i++) {
            for (int j=0; j<i; j++) {
                if (nums[i] > nums[j]) {
                    if (dp[i]==1+dp[j]) count[i]+=count[j];
                    else if (dp[i]<1+dp[j]) count[i]=count[j];
                    dp[i] = max(dp[i], 1+dp[j]);
                }
            }
        }
        
        int maxl=*max_element(dp.begin(), dp.end()), ct=0;
        
        for (int i=0; i<count.size(); i++) {
            if (dp[i]==maxl) ct+=count[i];
        }
        
        return ct;
    }
};