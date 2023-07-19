#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans = '1';
        for (int i=0; i<letters.size(); i++) {
            if (letters[i] > target) {
                ans = letters[i];
                break;
            }
        }
        
        if (ans=='1') return letters[0];
        return ans;
    }
};