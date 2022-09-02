#include<bits/stdc++.h>
#include<vector>
using namespace std;

class solution {
public:
    int singleNumber(vector<int>& nums) {
        int i = 0, result = 0;
        while (i < nums.size()) {
            result = result ^ nums[i];
            i++;
        }

        for (int j = 0; j < i; j++) {
            cout << nums[j] << " ";
        }
        return result;
    }
};

int main() 
{
    solution s;
    vector <int> v{1,2,2,3,1,4,3};
    cout << s.singleNumber(v) << endl;

    return 0;
}