#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        string stack = "";
        int n = s.length();
        for (int i=0; i<n; i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                stack.push_back(s[i]);
            }
            else if (s[i] == ')') {
                if (stack.length() == 0) return false;
                if (stack[stack.length() - 1] == '(') {
                    stack.pop_back();
                }
                else return false;
            }
            else if (s[i] == ']') {
                if (stack.length() == 0) return false;
                if (stack[stack.length() - 1] == '[') {
                    stack.pop_back();
                }
                else return false;
            }
            else if (s[i] == '}') {
                if (stack.length() == 0) return false;
                if (stack[stack.length() - 1] == '{') {
                    stack.pop_back();
                }
                else return false;
            }
            else return false;
        }
        if (stack.length() == 0) {
            return true;
        }
        else return false;
    }
};

int main() 
{
    Solution s;
    string str = "[(){}]";
    cout << s.isValid(str) << endl;

    return 0;
}