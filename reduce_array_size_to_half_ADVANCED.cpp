#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int ans = 0, halflen = arr.size()/2;
        vector <int> temp{};
        
        int max = 0;
        while (accumulate(temp.begin(), temp.end(), 0) < halflen)
        {
            for (int i=0; i<arr.size(); i++)
            {
                int ct = (int)count(arr.begin(), arr.end(), arr[i]);
                if (ct > max) max = ct;
            }
            temp.push_back(max);
            

        }
        
        return temp.size();
    }
};

int main()
{
    vector <int> v = {3,3,3,3,5,5,5,2,2,7};
    Solution s;
    cout << s.minSetSize(v) << endl;
}