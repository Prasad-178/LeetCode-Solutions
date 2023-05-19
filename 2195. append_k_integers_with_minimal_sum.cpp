#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        long long ans = 0, rem = 0, x;
        
        rem = (long long)nums[0] - 0 - 1;
        if (rem==0) {
            
        }
        else if (rem <= k) {
            ans += (long long)nums[0]*((long long)nums[0]+1)/2 - (long long)nums[0];  // - 0*(0+1)/2 
            k -= rem;
        }
        else {
            x = 0 + k + 1;
            ans += x*(x+1)/2 - x;
            return ans;
        }
        
        for (int i=1; i<nums.size(); i++) {
            if (k==0) return ans;
            rem = (long long)nums[i] - (long long)nums[i-1] - 1;
            if (rem<=0) continue;
            if (rem <= k) {
                long long p1 = -(long long)nums[i-1]*((long long)nums[i-1]+1)/2;
                long long p2 = (long long)nums[i]*((long long)nums[i]+1)/2;
                ans += p1 + p2 - (long long)nums[i];
                k -= rem;
            }
            else {
                x = (long long)nums[i-1] + k + 1;
                ans += x*(x+1)/2 - x - (long long)nums[i-1]*((long long)nums[i-1]+1)/2;
                return ans;
            }
        }
        
        long long next = (long long)nums[nums.size()-1]+1;
        while (k>0) {
            ans += next;
            next++;
            k--;
        }
        
        return ans;
    }
};