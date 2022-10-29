#include<bits/stdc++.h>
#include <vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return lower_bound(nums.begin(), nums.end(), target)-nums.begin();
    }
};

int main() 
{
    Solution s;
    int target = 4;
    vector <int> v{1, 3, 5};
    cout << s.searchInsert(v, target);

    return 0;
}