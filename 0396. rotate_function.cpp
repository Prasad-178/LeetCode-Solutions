#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sumOfArray = accumulate(nums.begin(), nums.end(), 0);
        
        int ans = 0;
        for (int i=0; i<nums.size(); i++) {
            ans += i*nums[i];
        }
        
        int sumExceptLast = sumOfArray - nums[nums.size()-1];
        int last = nums[nums.size()-1];
        int temp = ans;
        for (int i=1; i<nums.size(); i++) {
            int edit = temp - last*(nums.size()-1) + sumExceptLast;
            ans = max(ans, edit);
            temp = edit;
            sumExceptLast += last - nums[nums.size()-i-1];
            last = nums[nums.size()-1-i];
        }
        
        return ans;
    }
};