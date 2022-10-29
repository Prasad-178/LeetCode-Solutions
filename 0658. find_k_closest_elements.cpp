#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector <int> ans = {};
        if (x < arr[0]) {
            for (int i=0; i<k; i++) {
                ans.push_back(arr[i]);
            }
            return ans;
        }
        
        if (x > arr[n-1]) {
            for (int i=n-k; i<n; i++) {
                ans.push_back(arr[i]);
            }
            return ans;
        }
        
        if (n==1) {
            return {arr[0]};
        }
        
        int ci = 0;
        int diff = abs(arr[0] - x);
        int closest = 0;
        for (int i=0; i<n; i++) {
            if (abs(x - arr[i]) <= diff) {
                diff = abs(x - arr[i]);
                closest = arr[i];
                ci = i;
            }
        }
        
        int front = ci;
        int back = ci-1;
        int num = 0;
        for (int i=0; i<n; i++) {
            if (num == k) {
                break;
            }
            
            if (back<0) {
                ans.push_back(arr[front++]);
                num++;
                continue;
            }
            
            if (front>n-1) {
                ans.push_back(arr[back--]);
                num++;
                continue;
            }
            
            int backdiff = abs(arr[back] - x);
            int frontdiff = abs(arr[front] - x);
            if (backdiff < frontdiff) {
                ans.push_back(arr[back--]);
                num++;
            }
            else if (backdiff > frontdiff) {
                cout << "hi" << endl;
                ans.push_back(arr[front++]);
                num++;
            }
            else {
                cout << "hi" << endl;
                ans.push_back(arr[back--]);
                num++;
            }
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};