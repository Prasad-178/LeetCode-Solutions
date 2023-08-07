#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if (nums.size()==1) return 1;
        int maxi = 0;
        int cur = 1;
        
        for (int i=1; i<nums.size(); i++) {
            if (nums[i]>nums[i-1]) cur++;
            else cur=1;
            maxi = max(maxi, cur);
        }
        
        return maxi;
    }
};