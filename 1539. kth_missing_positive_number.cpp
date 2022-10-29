#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int hash[2010] = {};
        
        for (int i=0; i<n; i++) {
            hash[arr[i]]++;
        }
        
        for (int i=1; i<2010; i++) {
            if (hash[i] == 0) {
                k--;
            }
            
            if (k==0) {
                return i;
            }
        }
        
        return 1;
    }
};