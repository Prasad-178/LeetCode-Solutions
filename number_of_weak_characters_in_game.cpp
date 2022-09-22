#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<math.h>
#include<iterator>
using namespace std;

class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        int count = 0;
        int n = properties.size();
        multimap <int,int> m;
        for (int i=0; i<n; i++) {
            m.insert(pair<int,int>(properties[i][0], properties[i][1]));
        }

        for (auto it=m.begin(); it!=m.end(); ++it) {
            cout << it->first << " " << it->second << endl;
        }

        for (auto it=m.begin(); it!=m.end(); ++it) {
            for (auto jt = m.begin(); jt!=m.end(); jt++) {
                if (it->first < jt->first && it->second < jt->second) {
                    count++;
                    break;
                }
            }
        }

        return count;
    }
};

int main() 
{
    Solution s;
    vector<vector<int>> v = {{7,7},{1,2},{9,7},{7,3},{3,10},{9,8},{8,10},{4,3},{1,5},{1,5}};
    cout << s.numberOfWeakCharacters(v) << endl;   

    return 0;
}