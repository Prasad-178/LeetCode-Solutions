#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    Solution s;
    cout << s.rob({2,1,4,9}) << "\n";
}

class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size()==1) return nums[0];
        if (nums.size()==2) return max(nums[0], nums[1]);
        int prev2 = nums[0];
        int prev1 = max(nums[0], nums[1]);
        int ans;
        
        int choose, notChoose;
        for (int i=2; i<nums.size(); i++) {
            choose = nums[i] + prev2;
            notChoose = prev1;
            
            ans = max(choose, notChoose);
            
            prev2 = prev1;
            prev1 = ans;
        }
        
        return ans;
    }
};