#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans = {};
    
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if (n==1) {
            return;
        }
        
        int temp = -2;
        for (int i=n-1; i>=1; i--) {
            if (nums[i] > nums[i-1]) {
                temp = i-1;
                break;
            }
        }
        
        if (temp == -2) {
            sort(nums.begin(), nums.end());
            ans.push_back(nums);
            return;
        }
        
        for (int i=n-1; i>=1; i--) {
            if (nums[i] > nums[temp]) {
                int k = nums[i];
                nums[i] = nums[temp];
                nums[temp] = k;
                sort(nums.begin()+temp+1, nums.end());
                ans.push_back(nums);
                return;
            }
        }
        
        sort(nums.begin(), nums.end());
    }
    
    int factorial(int num) {
        int product = 1;
        for (int i=1; i<=num; i++) {
            product *= i;
        }
        
        return product;
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        if (n==1) {
            return {{nums[0]}};
        }
        
        vector <int> hash (21,0);
        for (int i=0; i<n; i++) {
            hash[nums[i]+10]++;
        }
        for (int i=0; i<21; i++) {
            cout << hash[i] << " ";
        }
        cout << endl;
        
        int maxRepeat=0;
        for (int i=0; i<21; i++) {
            if (hash[i] > maxRepeat) {
                maxRepeat = hash[i];
            }
        }
        
        int fact = factorial(n);        
        if (maxRepeat > 1) {
            vector <int> repeaters = {};
            for (int i=0; i<21; i++) {
                if (hash[i] > 1) {
                    repeaters.push_back(hash[i]);
                }    
            }
            
            int rs = repeaters.size();
            int curProd = 1;
            for (int i=0; i<rs; i++) {
                curProd *= factorial(repeaters[i]);
            }
            
            for (int i=0; i<fact/curProd; i++) {
                nextPermutation(nums);
            }
            return ans;
        }
        
        for (int i=0; i<fact; i++) {
            nextPermutation(nums);
        }
        
        return ans;
    }
};