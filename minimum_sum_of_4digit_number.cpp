#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int minimumSum(int num) {
        int min1=999, min2=999, max1=-1, max2=-1, min1index=-1, min2index=-1, max1index=-1, max2index=-1;
        vector <int> v;
        int temp = num;
        for (int i=0; i<4; i++)
        {
            int mod = temp%10;
            v.push_back(mod);
            temp /= 10;
        }

        for (int i=0; i<4; i++)
        {
            if (v[i] < min1)
            {
                min1 = v[i];
                min1index = i;
            } 
            if (v[i] > max1) 
            {
                max1 = v[i];
                max1index = i;
            }
        }       

        for (int i=0; i<4; i++)
        {
            if (v[i] < min2 && i != min1index)
            {
                min2 = v[i];
                min2index = i;
            } 
            if (v[i] > max2 && i != max1index)
            {
                max2 = v[i];
                max2index = i;
            } 
        }
        v.clear();

        return (((min1*10) + max1) + ((min2*10) + max2));
    }
};

int main() 
{
    Solution s;
    cout << s.minimumSum(1234) << endl;

    return 0;
}
