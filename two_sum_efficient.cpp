#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans = {}, temp; 
        int size = nums.size();
        for (int i=0; i<size; i++) temp.push_back(nums[i]);
        sort(temp.begin(), temp.end());

        int front = 0, back = size-1;

        while (temp[front] + temp[back] != target)
        {
            if (temp[front] + temp[back] < target) front++;
            else back--;
        }

        int frontval = temp[front];
        cout << frontval << endl;
        int backval = temp[back];
        cout << backval << endl;

        for (int i=0; i<size; i++)
        {
            if (nums[i] == frontval)
            {
                ans.push_back(i);
                break;
            } 
        }
        for (int i=0; i<size; i++)
        {
            if (nums[i] == backval && i!=ans[0])
            {
                ans.push_back(i);
                break;
            } 
        }

        return ans;
    }
};

int main() 
{
    Solution s;
    vector <int> nums = {9, 7, 2, 15};
    int target = 9; 
    vector <int> ans = s.twoSum(nums, target);
    for (int i=0; i<2; i++) cout << ans[i] << " ";
    cout << endl;

    return 0;
}