#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum = 0;
        int n = nums.size();
        for (int i=0; i<n; i++) {
            if (nums[i]%2 ==0) {
                sum += nums[i];
            }
        }
        
        n = queries.size();
        vector <int> ans = {};
        
        for (int i=0; i<n; i++) {
            int index = queries[i][1];
            if ((nums[index] + queries[i][0])%2 == 0) {
                if (nums[index]%2 == 0) {
                    sum += queries[i][0];
                }
                else {
                    sum += queries[i][0] + nums[index];
                }
                nums[index] = nums[index] + queries[i][0];
                ans.push_back(sum);
            }
            else {
                if (nums[index]%2 == 0) {
                    sum -= nums[index];
                    
                }
                else {
                    
                }
                ans.push_back(sum);
                nums[index] = nums[index] + queries[i][0];
            }
        }
        
        return ans;
    }
};

int main() 
{
    

    return 0;
}