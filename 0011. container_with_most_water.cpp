#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea=0, area=0;
        int back = height.size() - 1;
        int front = 0;
        if (front >= back) return 0;
        
        while (front < back)
        {
            area = (back - front) * min(height[back], height[front]);
            if (height[front] > height[back]) back--;
            else front++;
            maxarea = max(area, maxarea);
        }
        return maxarea;
    }
};

int main()
{
    Solution s;
    vector <int> height = {1,3,2,5,25,24,5};
    long long n = height.size();
    int ans = s.maxArea(height);

    cout << ans << endl;
}