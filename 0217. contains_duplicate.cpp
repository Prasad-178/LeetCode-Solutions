#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int,int> m;
        for (int i=0; i<nums.size(); i++) {
            m[nums[i]]++;
            if (m[nums[i]] == 2) return true;
        }
        
        return false;
    }
};