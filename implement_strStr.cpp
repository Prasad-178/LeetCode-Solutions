#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

class Solution {
public:
    int checkStr(string haystack, string needle, int index) {
        int n1 = haystack.length();
        int n2 = needle.length();
        for (int i=index; i<index+n2; i++) {
            if (haystack[i] == needle[i-index]) continue;
            else return 0;
        }
        return 1;
    }

    int strStr(string haystack, string needle) {
        if (needle.length() == 0) return 0;

        int n1 = haystack.length();
        int n2 = needle.length();
        char firstChar = needle[0];
        char lastChar = needle[n2-1];
        
        for (int i=0; i<n1; i++) {
            if (haystack[i] == firstChar) {
                if (n2 == 1) return i;
                if (i+n2 > n1) {
                    return -1;
                }
                else if (haystack[i+n2-1] != lastChar) {
                    continue;
                }
                else if (haystack[i+1] != needle[1]) {
                    continue;
                }
                else {
                    int temp =  checkStr(haystack, needle, i);

                    if (temp == 1) return i;
                    else continue;
                }
            }
            else {}
        }
        return -1;
    }
};

int main() 
{
    Solution s;
    string haystack = "hello";
    string needle = "ll";
    cout << s.strStr(haystack, needle) << endl;  

    return 0;
}