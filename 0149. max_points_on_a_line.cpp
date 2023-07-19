#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int ans=0;
        if(points.size()==1) return 1;
        for(int i=0;i<points.size();i++) {
            for(int j=0;j<points.size();j++) {
                if(i!=j) {
                    int ct=0;
                    for(int k=0;k<points.size();k++) {
                        if(((points[k][1]-points[i][1])*(points[j][0]-points[i][0]))==((points[j][1]-points[i][1])*(points[k][0]-points[i][0]))) {
                            ct++;
                        }
                    }
                    ans = max(ans,ct);
                }
            }
        }
        return ans;
    }
};