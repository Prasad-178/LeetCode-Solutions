#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int front=0, back=nums.size()-1, mid=nums.size()/2, diff=INT_MAX, sum;
        sort(nums.begin(), nums.end());
        // for (auto x : nums) cout << x << " ";

        while (front<mid and mid<back)
        {
            int flag = 0;
            sum = nums[front] + nums[mid] + nums[back];
            int frontone = nums[front+1] + nums[mid] + nums[back];
            int midplusone = nums[front] + nums[mid+1] + nums[back];
            int midminusone = nums[front] + nums[mid-1] + nums[back];
            int backone = nums[front] + nums[mid] + nums[back-1];
            if (abs(sum-target) < diff) diff = abs(sum-target);

            if (diff==0) return target;
            if (sum < target)
            {
                if ((abs(target - frontone) < diff) && (abs(target - frontone) < abs(target - midplusone)) && front+1 != mid)
                {
                    front++; 
                    flag = 1; 
                    diff = abs(frontone - target); 
                    sum = frontone;
                }
                else if ((abs(target - midplusone) < diff) && (abs(target - midplusone) < abs(target - frontone)) && mid+1 != back)
                {
                    mid++; 
                    flag = 1; 
                    diff = abs(midplusone - target);
                    sum = midplusone;
                }
            }
            else if (sum > target)
            {
                if ((abs(target - midminusone) < diff) && (abs(target - midminusone) < abs(target - backone)) && mid-1 != front)
                {
                    mid--; 
                    flag = 1; 
                    diff = abs(midminusone - target);
                    sum = midminusone;
                }
                else if ((abs(target - backone) < diff) && (abs(target - backone) < abs(target - midminusone)) && back-1 != mid)
                {
                    back--; 
                    flag = 1; 
                    diff = abs(backone - target);
                    sum = backone;
                }
            }
            if (flag == 0) break;
            if (front == back or back == mid) break;
        }
        return sum;
    }
};

int main() 
{
    Solution s;
    vector <int> nums {-1, 2, 1, -4};
    int target = 1;
    cout << s.threeSumClosest(nums, target);

    return 0;
}