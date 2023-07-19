#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int ans = 0;
        for (int i=0; i<nums.size(); i++) {
            for (int j=i+1; j<nums.size(); j++) {
                if (nums[i]+nums[j]==target) ans++;
                if (nums[j]+nums[i]==target) ans++;
            }
        }
        
        return ans;
    }
};