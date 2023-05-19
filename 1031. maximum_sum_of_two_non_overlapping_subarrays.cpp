#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int f(vector<int>& first, vector<int>& second, int index, int firstLen, int secondLen, bool firstDone, bool secondDone) {
        if (index >= first.size()) return 0;
        if (firstDone && secondDone) return 0;
        
        int chooseFirst = 0, chooseSecond = 0;
        if (!firstDone) chooseFirst = first[index] + f(first, second, index+firstLen, firstLen, secondLen, true, secondDone);
        if (!secondDone) chooseSecond = second[index] + f(first, second, index+secondLen, firstLen, secondLen, firstDone, true);
        return max({chooseFirst, chooseSecond, f(first, second, index+1, firstLen, secondLen, firstDone, secondDone)});
    }
    
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
        if (firstLen+secondLen == nums.size()) return accumulate(nums.begin(), nums.end(), 0);
        int left=0, right=firstLen-1, sum=0;
        vector<int> first = {}, second = {};
        for (int i=left; i<=right; i++) sum += nums[i];
        
        while (right < nums.size()) {
            first.push_back(sum);
            sum -= nums[left];
            left++; right++;
            sum += nums[right];
        }
        
        while (first.size() < nums.size()) first.push_back(0);
        
        // for (int i=0; i<first.size(); i++) cout << first[i] << " ";
        // cout << "\n";
        
        sum=0, left=0, right=secondLen-1;
        for (int i=left; i<=right; i++) sum += nums[i];
        
        while (right < nums.size()) {
            second.push_back(sum);
            sum -= nums[left];
            left++; right++;
            sum += nums[right];
        }
        
        while (second.size() < nums.size()) second.push_back(0);
        
        return f(first, second, 0, firstLen, secondLen, false, false);
    }
};