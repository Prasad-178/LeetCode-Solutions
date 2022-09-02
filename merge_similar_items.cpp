#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        int n1 = items1.size(), n2 = items2.size();
        map <int, int> m;
        for (int i=0; i<n1; i++) m[items1[i][0]] += items1[i][1];
        for (int i=0; i<n2; i++) m[items2[i][0]] += items2[i][1];

        vector <vector <int> > ans = {};
        int n = m.size();
        for (auto &it : m)
        {
            ans.push_back({it.first,it.second});
        }
        return ans;
    }
};

int main() 
{
    Solution s;
    vector <vector <int> > items1 = {{1,1},{4,5},{3,8}};
    vector <vector <int> > items2 = {{3,1},{1,5}};
    vector <vector <int> > ans = s.mergeSimilarItems(items1, items2);

    return 0;
}