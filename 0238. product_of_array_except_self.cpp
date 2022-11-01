#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int numofzeros = 0;
        int n = nums.size();
        int prod = 1;
        
        for (int i=0; i<n; i++) {
            if (nums[i] != 0) {
                prod = prod * nums[i];
            }
            else {
                numofzeros++;
                if (numofzeros > 1) {
                    break;
                }
            }
        }
        
        if (numofzeros>1) {
            for (int i=0; i<n; i++) {
                nums[i] = 0;
            }
            return nums;
        }
        
        if (numofzeros==1) {
            for (int i=0; i<n; i++) {
                if (nums[i] == 0) {
                    nums[i] = prod;
                }
                else {
                    nums[i] = 0;
                }
            }
            return nums;
        }
        
        for (int i=0; i<n; i++) {
            nums[i] = prod/nums[i];
        }
        
        return nums;
    }
};