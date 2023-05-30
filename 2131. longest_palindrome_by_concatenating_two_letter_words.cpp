#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string, int> m;
        int ans = 0;

        for (int i=0; i<words.size(); i++) {
            m[words[i]]++;
        }
        
        
        int oddDone = false;
        for (auto it=m.begin(); it!=m.end(); it++) {
            int adder = (*it).second;
            if ((*it).first[0] == (*it).first[1]) {
                if (((*it).second)%2==1) {
                    if (!oddDone) {
                        ans += 2*adder;
                        oddDone = true;
                    }
                    else {
                        ans += 2*(adder - 1);
                    }
                }
                else {
                    ans += 2*adder;
                }
            }
            else {
                string rev = (*it).first;
                reverse(rev.begin(), rev.end());
                if (m.find(rev) != m.end()) {
                    ans += 4*min(m[rev], adder);
                }
                m[rev] = 0;
                (*it).second = 0;
            }
        }
        
        return ans;
    }
};