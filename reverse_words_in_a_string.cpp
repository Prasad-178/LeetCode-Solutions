#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        
        string temp = "";
        string ans = "";
        for (int i=0; i<n; i++) {
            if (s[i] == ' ') {
                reverse(temp.begin(), temp.end());
                ans = ans + temp + " ";
                temp = "";
            }
            else {
                temp = temp + s[i];
            }
        }
        
        reverse(temp.begin(), temp.end());
        ans = ans + temp;
        temp = "";
        
        return ans;
    }
};

int main() 
{
    

    return 0;
}