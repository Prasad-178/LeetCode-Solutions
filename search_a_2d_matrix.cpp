#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        for (int i=0; i<m; i++) {
            if (target <= matrix[i][n-1]) {
                return binary_search(matrix[i].begin(), matrix[i].end(), target);
            }
            else if (target > matrix[i][n-1]) continue;
        }
        return false;
    }
};

int main() 
{
    

    return 0;
}