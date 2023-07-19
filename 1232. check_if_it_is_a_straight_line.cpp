#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if (coordinates.size()==2) return true;
        
        for (int i=0; i<coordinates.size(); i++) {
            float a = (coordinates[1][0] - coordinates[0][0])*(coordinates[i][1] - coordinates[0][1]);
            float b = (coordinates[i][0] - coordinates[0][0])*(coordinates[1][1] - coordinates[0][1]);
            if (a!=b) return false;
        }
        return true;
    }
};