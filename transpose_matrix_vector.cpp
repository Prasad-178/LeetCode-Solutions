#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<vector<int>> transpose(c, vector<int>(r,0));
        int i, j;
        for (i=0; i<r; i++) {
            for (j=0; j<c; j++) {
                transpose[j][i] = matrix[i][j];
            }
        }
        for (i=0; i<c; i++) {
            for (j=0; j<r; j++) {
                cout << transpose[i][j] << " ";
            }
            cout<<endl;
        }
        return transpose;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> matrix{{1,2,3},{4,5,6}}, transposematrix;
    transposematrix = s.transpose(matrix);
    
}