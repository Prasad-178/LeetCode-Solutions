#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans=0;
        
        vector<int> prefix = {nums[0]};
        
        for (int i=1; i<nums.size(); i++) {
            prefix.push_back(prefix[i-1]+nums[i]);
        }
        
        vector<int> hash (k, 0);
        hash[0]=1;
        
        for (auto &x: prefix) {
            if (x<0) x = (x%k + k)%k;
            hash[x%k]++;
        }
        
        for (auto &x: hash) ans += x*(x-1)/2;
        
        return ans;
    }
};