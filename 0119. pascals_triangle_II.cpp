#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector <vector <int> > ans = {};
        for (int i=0; i<rowIndex+1; i++) {
            vector <int> temp (i+1);
            
            if (i==0) {
                temp[0] = 1;
                ans.push_back(temp);
            }
            else if (i==1) {
                temp[0] = 1;
                temp[1] = 1;
                ans.push_back(temp);
            }
            else {
                temp[0] = 1;
                temp[i] = 1;
                for (int j=1; j<i; j++) {
                    temp[j] = ans[i-1][j-1] + ans[i-1][j];
                }
                ans.push_back(temp);
            }
        }
        
        return ans[rowIndex];
    }
};