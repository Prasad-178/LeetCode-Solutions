#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        long long ans = 0;
        int len = rectangles.size();
        if (len == 1) return 0;
        unordered_map <long double,long long> m;
        for (long long i=0; i<len; i++)
        {
            long double insert = (long double)rectangles[i][0] / rectangles[i][1];
            m[insert]++;
        }

        // printing map key:value pairs
        // for (auto &it : m)
        //     cout << it.first << " " << it.second << endl;

        for (auto it : m)
        {
            if (it.second > 1)
                ans += (it.second-1) * (it.second) / 2;
        }

        return ans;
    }
};

int main() 
{
    Solution s;
    vector <vector <int> > rectangles = {{4,8}, {8,4}};
    cout << s.interchangeableRectangles(rectangles) << endl;

    return 0;
}