#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int> v{};
        for (int i=0; i<nums.size(); i++)
        {
            if (i==0)
            {
                v.push_back(nums[0]);
            }
            else
            {
                v.push_back(v[i-1] + nums[i]);
            }
        }
        return v;
    }
};

int main()
{
    vector <int> vec;
    Solution s;
    vector <int> v{3, 1, 2, 10, 1};
    vec = s.runningSum(v);

    for (int i=0; i<vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}