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
    
    void bt(vector<int>& candidates, int target, int index) {
        if (target==0) {
            // temp2[temp]=1;
            ans.push_back(temp);
            return;
        }
        if (target < 0) return;
        if (index>=candidates.size()) return;
        
        for (int i=index; i<candidates.size(); i++) {
            if (i!=index && candidates[i]==candidates[i-1]) continue;
            temp.push_back(candidates[i]);
            bt(candidates, target-candidates[i], i+1);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        ans.clear();
        temp.clear();
        bt(candidates, target, 0);
        // for (auto it=temp2.begin(); it!=temp2.end(); it++) {
        //     ans.push_back((*it).first);
        // }
        return ans;
    }
};