#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<int> newNums = {};
        unordered_map <int, int> tempm;
        
        for (int i=0; i<nums.size(); i++) {
            tempm[nums[i]]++;
            tempm[nums[i]] = min(tempm[nums[i]], 4);
        }
        
        for (auto it = tempm.begin(); it != tempm.end(); it++) {
            for (int i=0; i<(*it).second; i++) {
                newNums.push_back((*it).first);
            }
        }
        
        unordered_map <long long, vector<pair<long long, long long>>> m;
        for (int i=0; i<newNums.size(); i++) {
            for (int j=i+1; j<newNums.size(); j++) {
                m[newNums[i]+newNums[j]].push_back({i, j});
            }
        }
        
        map <vector<int>, int> m2;
        
        for (int i=0; i<newNums.size(); i++) {
            for (int j=i+1; j<newNums.size(); j++) {
                long long two = newNums[i]+newNums[j];
                long long toFind = target - two;
                if (m.find(toFind) != m.end()) {
                    for (int k=0; k<m[toFind].size(); k++) {
                        pair<long long, long long> p = m[toFind][k];
                        if (i != p.first && i != p.second && j != p.first && j != p.second) {
                            vector<int> temp = {newNums[i], newNums[j], newNums[p.first], newNums[p.second]};
                            sort(temp.begin(), temp.end());
                            m2[temp]++;
                        }
                    }
                }
            }
        }
        
        vector<vector<int>> ans = {};
        for (auto it=m2.begin(); it != m2.end(); it++) {
            ans.push_back((*it).first);
        }
        
        return ans;
    }
};