#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        double avg = 0;
        double max=-100000, min=100000;
        int n = salary.size();

        for (int i=0; i<n; i++)
        {
            avg += salary[i];
            if (salary[i] < min)
                min = salary[i];
            if (salary[i] > max)
                max = salary[i];
        }
        avg = avg - min - max;
        avg /= (n-2);

        return avg;
    }
};

int main() 
{
    Solution s;
    vector <int> salary = {4000, 3000, 1000, 2000};
    cout << s.average(salary) << endl;

    return 0;
}