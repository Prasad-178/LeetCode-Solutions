#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        vector<int> hash((2*1e4) + 5, 0);
        for (int i=0; i<nums.size(); i++) hash[nums[i]+1e4]++;
        for (int i=hash.size()-1; i>=0; i--) {
            if (hash[i] >= 1) k-=hash[i];
            if (k<=0) return i-1e4;
        }
        return -1;
    }
};

int main() 
{
    Solution s;
    vector <int> nums = {3,2,3,1,2,4,5,5,6};
    int k = 4;
    cout << s.findKthLargest(nums, k) << endl;   

    return 0;
}