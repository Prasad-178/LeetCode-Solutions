#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        long long days = 0;
        unordered_map <int,int> m;
        unordered_map <int,int> index;
        int n = tasks.size();

        // for (int i=0; i<n; i++)
        //     m[tasks[i]] = 0;

        for (int i=0; i<n; i++)
        {
            if (m[tasks[i]] == 0)
            {
                m[tasks[i]] = 1;
                index[tasks[i]] = ++days;
            }
            else if (days - index[tasks[i]] >= space)
            {
                index[tasks[i]] = ++days;
            }
            else
            {
                i--;
                days++;
            }
        }
        return days;
    }
};

int main() 
{
    Solution s;
    vector <int> tasks = {1, 2, 1, 2, 3, 1};
    int space = 3;
    cout << s.taskSchedulerII(tasks,space) << endl;  

    return 0;
}