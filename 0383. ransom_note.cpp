#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> parent(27,0);
        vector<int> child(27,0);

        int n1 = ransomNote.length(), n2 = magazine.length();
        for (int i=0; i<n1; i++)
        {
            child[ransomNote[i]-97]++;
        }
        for (int i=0; i<n2; i++)
        {
            parent[magazine[i]-97]++;
        }

        for (int i=0; i<27; i++)
        {
            if (parent[i] < child[i]) return false;
        }
        return true;
    }
};

int main() 
{


    return 0;
}