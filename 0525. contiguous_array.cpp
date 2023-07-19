#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        vector<int> prefix = {};
        unordered_map <int, int> m;
        
        if (nums[0]==0) prefix.push_back(-1);
        else prefix.push_back(1);
        
        m[prefix[0]]=1;
        
        for (int i=1; i<nums.size(); i++) {
            if (nums[i]==0) prefix.push_back(-1+prefix[i-1]);
            else prefix.push_back(1+prefix[i-1]);
            
            if (prefix[i]==0) m[0] = max(m[0], i+1);
            else {
                if (m.find(prefix[i])==m.end()) m[prefix[i]]=i+1;
                else m[prefix[i]] = min(m[prefix[i]], i+1);
            }
        }
        
        int maxi = 0;
        for (int i=0; i<prefix.size(); i++) {
            if (prefix[i]==0) maxi = max(maxi, m[0]);
            else {
                if (m.find(prefix[i]) != m.end()) maxi = max(maxi, i+1-m[prefix[i]]);
                else continue;
            }
        }
        maxi = max(maxi, m[0]);
        
        return maxi;
    }
};