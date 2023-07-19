#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        vector<int> prefix = {nums[0]};
        unordered_map <int, int> m;
        
        m[nums[0]]++;
        int ans = 0;
        
        
        if (nums[0]==goal) ans++;
        for (int i=1; i<nums.size(); i++) {
            prefix.push_back(prefix[i-1] + nums[i]);
            
            if (prefix[i]<goal) {}
            else if (prefix[i]==goal) {
                ans++;
                ans += m[0];
            }
            else {
                int extra = prefix[i] - goal;
                if (m.find(extra) != m.end()) ans += m[extra];
                else {}
            }
            
            m[prefix[i]]++;
        }
        
        return ans;
    }
};