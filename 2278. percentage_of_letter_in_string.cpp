#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int percentageLetter(string s, char letter) {
        int ct = 0;
        for (int i=0; i<s.length(); i++)
        {
            if (s[i]==letter)
                ct++;
        }
        return (int)(ct*100/s.length());
    }
};

int main()
{
    string str = "vmvvvvvzrvvpvdvvvvyfvdvvvvpkvvbvvkvvfkvvvkvbvvnvvomvzvvvdvvvkvvvvvvvvvlvcvilaqvvhoevvlmvhvkvtgwfvvzy";
    char letter = 'v';
    Solution s;
    cout << s.percentageLetter(str, letter);
}