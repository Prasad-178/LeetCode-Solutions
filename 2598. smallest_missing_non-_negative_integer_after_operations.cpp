#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        vector<int> hash (value, 0);
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] >= 0) hash[nums[i]%value]++;
            else {
                if (nums[i]%value==0) hash[0]++;
                else hash[value+(nums[i]%value)]++;
            }
        }
        
        int mini = 1e7;
        for (int i=0; i<hash.size(); i++) {
            mini = min(mini, hash[i]);
        }
        
        int index;
        for (int i=0; i<hash.size(); i++) {
            if (hash[i] == mini) {
                index=i;
                break;
            }
        }
        
        if (index==0) return hash[index]*value;
        else return index + hash[index]*value;
    }
};