#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        if (nums.size() == 1) {
            return nums[0];
        }
        else {
            int arr[100], i=0, j=1;
            for (i=0; i<100; i++) {
                arr[i] = 0;
            }
            while (j < nums.size() + 1) {
                arr[nums[i]-1]++;
                j++;
            }
        }

    }
};

int main() 
{
    Solution s;
    vector <int> v{1, 2, 3, 2};
    cout << s.sumOfUnique(v) << endl; 

    return 0;
}