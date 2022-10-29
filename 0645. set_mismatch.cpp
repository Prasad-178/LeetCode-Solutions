#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans = {};
        vector <int> hash (n,0);
        for (int i=0; i<n; i++) {
            hash[nums[i] - 1]++;
        }
        
        for (int i=0; i<n; i++) {
            if (hash[i] == 2) {
                ans.push_back(i+1);
            }
        }
        
        for (int i=0; i<n; i++) {
            if (hash[i] == 0) {
                ans.push_back(i+1);
            }
        }
        
        return ans;
    }
};