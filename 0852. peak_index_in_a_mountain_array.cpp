#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int binarySearch(vector <int> &nums, int front, int back) {
        if (front <= back) {
            int mid = (front + back)/2;
            
            if (nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) {
                return mid;
            }
            
            int a = binarySearch(nums, mid+1, back);
            int b = binarySearch(nums, front, mid-1);
            if (a > 0) {
                return a;
            }
            
            if (b > 0) {
                return b;
            }
        }
        return -1;
    }
    
    int peakIndexInMountainArray(vector<int>& arr) {
        return binarySearch(arr, 1, arr.size()-2);
    }
};