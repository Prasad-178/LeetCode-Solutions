#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int> kadaneLeft = {};
        kadaneLeft.push_back(nums[0]);
        for (int i=1; i<nums.size(); i++) {
            if (nums[i]==0) {
                kadaneLeft.push_back(0);
            }
            else {
                if (kadaneLeft[i-1]==0) {
                    kadaneLeft.push_back(nums[i]);
                }
                else {
                    kadaneLeft.push_back(kadaneLeft[i-1]*nums[i]);
                }
            }
        }
        
        vector<int> kadaneRight (nums.size(), 0);
        kadaneRight[nums.size()-1] = nums[nums.size()-1];
        
        for (int i=nums.size()-2; i>=0; i--) {
            if (nums[i]==0) {
                kadaneRight[i] = 0;
            }
            else {
                if (kadaneRight[i+1]==0) {
                    kadaneRight[i] = nums[i];
                }
                else {
                    kadaneRight[i] = kadaneRight[i+1]*nums[i];
                }
            }
        }
        
        return max(*max_element(kadaneLeft.begin(), kadaneLeft.end()), *max_element(kadaneRight.begin(), kadaneRight.end()));
    }
};