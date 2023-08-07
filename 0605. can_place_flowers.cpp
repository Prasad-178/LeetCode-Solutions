#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) {
        if (n==0) return true;
        if (nums.size()==1 && n>1) return false;
        if (nums.size()==1 && n==1) {
            if (nums[0]==0) return true;
            return false;
        }
        for (int i=0; i<nums.size(); i++) {
            if (n==0) return true;
            if (i==0) {
                if (nums[0]==0 && nums[1]==0) {
                    nums[0]=1;
                    n--;
                    continue;
                }
            }
            else if (i==nums.size()-1) {
                if (i==nums.size()-1 && nums[i-1]==0 && nums[i]==0) {
                    nums[i]=1;
                    n--;
                    continue;
                }
            }
            else {
                if (nums[i-1]+nums[i]+nums[i+1]==0) {
                    nums[i]=1;
                    n--;
                }
            }
        }
        
        if (n<=0) return true;
        return false;
    }
};