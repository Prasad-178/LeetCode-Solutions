#include<bits/stdc++.h>
#include<string>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        string s;
        int temp = num;
        while(temp > 0)
        {
            if (temp >= 1000)
            {
                s.append("M");
                temp -= 1000;
            }
            else if (temp >=900 && temp <1000)
            {
                s.append("C");
                s.append("M");
                temp -= 900;
            }
            else if (temp >= 500 && temp < 900)
            {
                s.append("D");
                temp -= 500;
            }
            else if (temp >=400 && temp < 500)
            {
                s.append("C");
                s.append("D");
                temp -= 400;
            }
            else if (temp >= 100 && temp < 400)
            {
                s.append("C");
                temp -= 100;
            }
            else if (temp >= 90 && temp < 100)
            {
                s.append("X");
                s.append("C");
                temp -= 90;
            }
            else if (temp >= 50 && temp < 90)
            {
                s.append("L");
                temp -= 50;
            }
            else if (temp >= 40 && temp < 50)
            {
                s.append("X");
                s.append("L");
                temp -= 40;
            }
            else if (temp >= 10 && temp < 40)
            {
                s.append("X");
                temp -= 10;
            }
            else if (temp == 9)
            {
                s.append("I");
                s.append("X");
                temp -= 9;
            }
            else if (temp >= 5 && temp < 9)
            {
                s.append("V");
                temp -= 5;
            }
            else if (temp == 4)
            {
                s.append("I");
                s.append("V");
                temp -= 4;
            }
            else if (temp >= 1 && temp < 4)
            {
                s.append("I");
                temp -= 1;
            }
        }
        return s;
    }
};

int main() 
{
    int i=0;
    Solution s;
    int num = 1994;
    cout <<  s.intToRoman(num);

    return 0;
}