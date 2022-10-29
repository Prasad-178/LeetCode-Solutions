#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.length();
        vector <int> ans(n,0);
        vector <int> hash(n);
        for (int i=0; i<n; i++)
        {
            hash[i] = boxes[i]-48;
        }
        for (auto &it : hash) cout << it << " ";
        cout << endl;

        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (j != i && hash[j] == 1)
                    ans[i] += abs(i-j);
            }
        }

        // for (auto &it : ans) cout << it << " ";
        // cout << endl;

        return ans;
    }
};

int main() 
{
    Solution s;
    string boxes = "001011";
    vector <int> ans = s.minOperations(boxes);

    // int n = ans.size();
    for (auto &it : ans) cout << it << " ";

    return 0;
}