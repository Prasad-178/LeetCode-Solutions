#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int posi = 0;
        int negi = 0;
        int temp;
        int n = nums.size();
        vector <int> pos = {};
        vector <int> neg = {};
        for (int i=0; i<n; i++) {
            if (nums[i] > 0) {
                pos.push_back(nums[i]);
            }
            else {
                neg.push_back(nums[i]);
            }
        }
        
        for (int i=0; i<n; i++) {
            if (i%2 == 0) {
                nums[i] = pos[posi++];
            }
            else {
                nums[i] = neg[negi++];
            }
        }
        
        return nums;
    }
};