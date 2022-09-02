// SOLVED IN VSCODE BUT NOT IN LEETCODE :((
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

long long sum=0;
class Solution {
public:
    long long solve(long long m, long long n, long long i, long long j)
    {
        if (i==m && j==n) sum++;

        else if (i<m && j==n)
        {
            solve(m,n,i+1,j);
        }
        
        else if (i<m && j<n)
        {
            solve(m,n,i+1,j);
            solve(m,n,i,j+1);
        }
        
        else if (i==m && j<n)
        {
            solve(m,n,i,j+1);
        }

        else return sum;

        return sum;
    }

    int uniquePaths(int m, int n) {
        long long i=1, j=1;
        return solve(m,n,i,j);
    }
};

int main() 
{
    Solution s;
    long long m=3;
    long long n=7;
    cout << s.uniquePaths(m,n) << endl;  

    return 0;
}