#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<math.h>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        int nunique = 0;
        
        nunique = set<int>(nums.begin(), nums.end()).size();
        sort(nums.begin(), nums.end());
        
        if (nunique <= 2) {
            return nums[nums.size()-1];
        }
        else {
            int max = nums[nums.size()-1];
            int i = nums.size()-1;
            while (nums[i] == max) {
                nums.erase(nums.begin()+i);
                i--;
            }

            max = nums[nums.size()-1];
            i = nums.size()-1;
            while (nums[i] == max) {
                nums.erase(nums.begin()+i);
                i--;
            }

            return nums[nums.size()-1];
        }
    }
};

int main() 
{
    Solution s;
    vector <int> nums = {3,2,1};
    cout << s.thirdMax(nums) << endl;

    return 0;
}