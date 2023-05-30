#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int f(vector<pair<int, int>>& arr, vector<int>& dp, int index) {
        if (index >= arr.size()) return 0;
        
        if (dp[index] != -1) return dp[index];
        
        if (index != arr.size()-1) {
            int choose=0, notChoose=0;
            if (arr[index+1].first == arr[index].first + 1) {
                choose =  arr[index].first * arr[index].second + f(arr, dp, index+2);
                notChoose = f(arr, dp, index+1);
            }
            else {
                choose = arr[index].first * arr[index].second + f(arr, dp, index+1);
            }
            return dp[index] = max(choose, notChoose);
        }
        else {
            return dp[index] = arr[index].first * arr[index].second;
        }
    }
    
    int deleteAndEarn(vector<int>& nums) {
        vector<pair<int, int>> arr = {};
        map <int, int> m;
        for (int i=0; i<nums.size(); i++) m[nums[i]]++;
        for (auto it=m.begin(); it!=m.end(); it++) arr.push_back({(*it).first, (*it).second});
        
        vector<int> dp (nums.size(), -1);
        
        return f(arr, dp, 0);
    }
};