#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public: 
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        if (n==1) {
            return false;
        }
        
        vector <int> v = {};
        
        for (int i=0; i<n; i++) {
            if (i==0) {
                v.push_back(nums[i]%k);
            }
            else {
                v.push_back((v[i-1] + nums[i])%k);
            }
        }
        
        n = v.size();
        for (int i=0; i<n; i++) {
            if (v[i] == 0 && i>=1) {
                return true;
            }
        }
        cout << endl;
        
        unordered_map <int, int> m;
        for (int i=0; i<n; i++) {
            if (m.find(v[i]) != m.end()) {
                if (i - m[v[i]] >= 2) {
                    return true;
                }
            }
            else {
                m[v[i]] = i;
            }
        }
        
        return false;
    }
};