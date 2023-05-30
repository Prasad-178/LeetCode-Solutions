#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans = {};
        unordered_map<int, int> m;
        
        for (int i=0; i<nums.size(); i++) {
            m[nums[i]]++;
        }
        
        for (auto it=m.begin(); it!=m.end(); it++) {
            if ((*it).second > nums.size()/3) ans.push_back((*it).first);
        }
        
        return ans;
    }
};