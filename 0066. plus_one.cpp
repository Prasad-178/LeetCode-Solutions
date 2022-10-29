#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size() - 1]++;
        for (int i=digits.size()-1; i>=0; i--)
        {
            if (digits[i] > 9)
            {
                if (i>0)
                {
                    digits[i] = digits[i]%10;
                    digits[i-1]++;
                }
                else
                {
                    digits[0] = digits[0]%10;
                    digits.insert(digits.begin(), 1);
                }
            }
        }

        return digits;
    }
};

int main() 
{
    Solution s;
    vector <int> nums = {1, 2, 9};
    nums = s.plusOne(nums);

    int len = nums.size();
    for (int i=0; i<len; i++) cout << nums[i] << " ";

    return 0;
}