#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        stack <int> s;
        for (int i=0; i<nums.size(); i++) {
            if (s.empty() || nums[i]>0) s.push(nums[i]);
            else {
                while (!s.empty() && s.top()>0 && s.top()<abs(nums[i])) s.pop();
                if (!s.empty() && s.top()==abs(nums[i])) s.pop();
                else {
                    if (s.empty() || s.top()<0) s.push(nums[i]);
                }
            }
        }
        
        vector <int> ans = {};
        while (!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};