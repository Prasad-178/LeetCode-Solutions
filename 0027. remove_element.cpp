#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i, ans=0;
        if (nums.size() == 0) return 0;
        for (i=0; i<nums.size(); i++)
        {
            if (nums[i] == val) {
                nums.erase(nums.begin() + i);
                i--;
            }
            else ans++;
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector <int> nums = {0,1,2,2,3,0,4,2};
    int ans = s.removeElement(nums, 2);

    for (int i=0; i<ans; i++) cout << nums[i] << " ";
}