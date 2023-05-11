#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> prefix = {nums[0]};
        
        for (int i=0; i<nums.size()-1; i++) {
            prefix.push_back(prefix[i]+nums[i+1]);
        }
        
        unordered_map<int, int> m;
        int ans = 0;
        
        for (int i=0; i<nums.size(); i++) {
            if (prefix[i]==k) ans++;
            if (m.find(prefix[i]-k) != m.end()) {
                ans += m[prefix[i]-k];
            }
            
            m[prefix[i]]++;
        }
        
        return ans;
    }
};