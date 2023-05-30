#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

// dutch national flag algorithm
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left=0, mid=0, right=nums.size()-1;
        
        while (mid<=right) {
            if (nums[mid]==0) {
                swap(nums[left], nums[mid]);
                mid++;
                left++;
            }
            else if (nums[mid]==1) {
                mid++;
            }
            else {
                swap(nums[right], nums[mid]);
                right--;
            }
        }
    }
};