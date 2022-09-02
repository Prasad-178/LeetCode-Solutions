#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector <int> temp;
        int i=0, j=0;
        while (i<m || j<n)
        {
            if (i==m)
            {
                temp.push_back(nums2[j]);
                j++;
            } 
            else if (j==n) 
            {
                temp.push_back(nums1[i]);
                i++;
            }
            else
            {
                if (nums1[i] >= nums2[j])
                {
                    temp.push_back(nums2[j]);
                    j++;
                }
                else
                {
                    temp.push_back(nums1[i]);
                    i++;
                }
            }
        }
        for (int i=0; i<m+n; i++) nums1[i] = temp[i];
        temp.clear();
    }
};

int main() 
{
    Solution s;
    vector <int> nums1 = {1, 2, 3, 0, 0, 0};
    vector <int> nums2 = {2, 5, 6};
    int m = 3;
    int n = 3;
    s.merge(nums1, m, nums2, n);
    for (int i=0; i<m+n; i++) cout << nums1[i] << " ";
    cout << endl;

    return 0;
}