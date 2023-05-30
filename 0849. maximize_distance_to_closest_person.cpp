#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        map<int, int> m;
        for (int i=0; i<seats.size(); i++) {
            if (seats[i]==1) m.insert({i,1});
        }
        
        int dist = -1, ans = -1;
        int prev=-1e7, next=(*m.begin()).first;
        for (int i=0; i<seats.size(); i++) {
            if (seats[i]==1) {
                prev = i;
                auto it = m.upper_bound(i);
                if (it!=m.end()) next = (*it).first;
                else next = 1e7;
                continue;
            }
            else {
                dist = min(abs(i-prev), abs(i-next));
                ans = max(ans, dist);
            }
        }
        
        return ans;
    }
};