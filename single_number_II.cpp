#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return nums[0];
        }
        
        unordered_map <int, int> m;
        for (int i=0; i<n; i++) {
            m[nums[i]]++;
        }
        
        for (auto &it: m) {
            if (it.second == 1) {
                return it.first;
            }
        }
        
        return 0;
    }
};

int main() 
{
    

    return 0;
}