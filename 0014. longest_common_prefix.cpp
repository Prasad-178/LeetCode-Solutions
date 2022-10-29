#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs[0][0] == '\0') return "";
        if (strs.size() == 1 || strs[0].empty()) return strs[0];
        int i, j;
        string ans = "";
        int lenarray = strs.size();

        int minsize = 99999;
        for (int i=0; i<lenarray; i++)
        {
            if (strs[i].length() < minsize) minsize = strs[i].length();
        }

        for (int i=0; i<minsize; i++)
        {
            int ct = 0;
            char ch = strs[0][i];
            for (int j = 0; j < lenarray; j++) {
                if (ch == strs[j][i]) ct++;
                else break;
            }

            if (ct == lenarray) ans.push_back(ch);
            else break;
            
        }
        return ans;
    }
};

int main() 
{
    Solution s;
    vector <string> strs = {"dog","racecar","car"};
    string ans = s.longestCommonPrefix(strs);
    int len = ans.length();

    cout << "The longest common prefix is : " << ans << "." << endl;

    return 0;
}