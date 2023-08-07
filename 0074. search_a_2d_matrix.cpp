#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        int low = 0;
        int high = m*n - 1;
        
        while (low != high) {
            int mid = (low+high-1)>>1;
            if (matrix[mid/n][mid%n] < target) 
                low = mid+1;
            else
                high = mid;
        }
        
        if (matrix[high/n][high%n] == target) return true;
        return false;
    }
};