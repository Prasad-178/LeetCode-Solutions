#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map <int, int> m;
        for (int i=0; i<nums3.size(); i++) {
            for (int j=0; j<nums4.size(); j++) {
                m[nums3[i]+nums4[j]]++;
            }
        }
        
        int ans = 0;
        for (int i=0; i<nums1.size(); i++) {
            for (int j=0; j<nums2.size(); j++) {
                ans += m[-(nums1[i]+nums2[j])];
            }
        }
        
        return ans;
    }
};