#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0, j=1;
        if (nums.size() == 1) {
            return 1;
        }
        else {
            while (j < nums.size()) {
                while (j < nums.size() && nums[i] == nums[j]) {
                    j++;
                }
                i++;
                if (j >= nums.size()){
                    ;
                }else{
                    nums[i] = nums[j]; 
                }
            }
            return i;
        }
    }
};


int main(){
    vector <int> v{1,1, 2, 2, 3, 4, 4, 5};
    Solution s;
    int size = s.removeDuplicates(v);
    cout << size << endl;
    for (int i = 0; i < size; i++){
        cout << v[i] << " ";
    }
    return 0;

}