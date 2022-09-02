#include<bits/stdc++.h>
#include<string>
using namespace std;

class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        int i=0, j=0, min = 10, samechecker=0;
        const int lens = s.length();

        int arr[] = {0,0,0,0,0,0,0,0,0,0};
        for (i = 0; i<target.length(); i++)
        {
            for (j=0; j<lens; j++)
            {
                if (target[i] == s[j])
                {
                    arr[i] += 1;
                }
            }
        }

        for (i=0; i<target.length(); i++)
        {
            if (arr[i] <= min)
            {
                min = arr[i];
            }
        }

        for (int i=1; i<target.length(); i++)
        {
            if (arr[i] == arr[0])
            {
                samechecker++;
            }
        }
        

        if (samechecker + 1 == target.length())
        {
            if (arr[0] == 0)
            {
                return 0;
            }
            return 1;
        }
        return min;
    }
};

int main() 
{
    Solution s;
    string str = "zys";
    string target = "aaaaa"; 
    cout << s.rearrangeCharacters(str, target);

    return 0;
}