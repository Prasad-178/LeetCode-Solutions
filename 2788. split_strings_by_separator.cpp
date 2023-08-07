#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector <string> ans = {};
        string temp = "";
        for (int i=0; i<words.size(); i++) {
            for (int j=0; j<words[i].size(); j++) {
                if (words[i][j]==separator) {
                    if (temp != "") {
                        ans.push_back(temp);
                        temp = "";
                    }
                }
                else {
                    temp.push_back(words[i][j]);
                }
            }
            if (temp != "") {
                ans.push_back(temp);
                temp = "";
            } 
        }
        
        return ans;
    }
};