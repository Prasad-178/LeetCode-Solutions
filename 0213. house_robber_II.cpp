#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size()==1) return nums[0];
        if (nums.size()==2) return max(nums[0], nums[1]);
        if (nums.size()==3) return max(nums[0], max(nums[1], nums[2]));
        
        bool flag = false;
        int prev2 = nums[0];
        int prev1 = max(nums[0], nums[1]);
        int ans1, ans2, choose, notChoose;
        for (int i=2; i<nums.size()-1; i++) {
            choose = nums[i] + prev2;
            notChoose = prev1;
            
            ans1 = max(choose, notChoose);
            
            prev2 = prev1;
            prev1 = ans1;
        }
        
        prev2 = nums[1];
        prev1 = max(nums[1], nums[2]);
        for (int i=3; i<nums.size(); i++) {
            choose = nums[i] + prev2;
            notChoose = prev1;
            
            ans2 = max(choose, notChoose);
            
            prev2 = prev1;
            prev1 = ans2;
        }
        
        return max(ans1, ans2);
    }
};