#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int f(vector<int>& nums, int target, int index) {
        if (index == nums.size() && target != 0) return 0;
        if (index == nums.size() && target == 0) return 1;
        
        return f(nums, target+nums[index], index+1) + f(nums, target-nums[index], index+1);
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        return f(nums, target, 0);
    }
};