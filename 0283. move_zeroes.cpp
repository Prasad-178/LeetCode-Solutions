#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int temp;
        int left = 0;
        int right = 1;
        while (left < right && right < nums.size()) {
            if (nums[left] == 0) {
                while (right < nums.size() && nums[right]==0) right++;
                if (right >= nums.size()) break;
                temp = nums[right];
                nums[right] = nums[left];
                nums[left] = temp;
            }
            left++;
            right++;
        }
    }
};