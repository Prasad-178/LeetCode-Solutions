#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    vector<vector<int>> ans = {};
    vector<int> temp = {};
    void bt(vector<int>& nums, int index, int k, int n) {
        if (temp.size()>k) return;
        if (temp.size()==k) {
            if (n==0) {
                // for (int i=0; i<temp.size(); i++) {
                //     cout << temp[i] << " ";
                // }
                // cout << "\n";
                ans.push_back(temp); 
                return;
            }
            else return;
        }
        if (index >= nums.size() && n==0 && temp.size()==k) {
            ans.push_back(temp); 
            return;
        }
        if (index >= nums.size() && n!=0) return;
        
        for (int i=index; i<9; i++) {
            temp.push_back(nums[i]);
            bt(nums, i+1, k, n-nums[i]);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        ans.clear();
        temp.clear();
        vector<int> nums = {1,2,3,4,5,6,7,8,9};
        
        bt(nums, 0, k, n);
            
        return ans;
    }
};