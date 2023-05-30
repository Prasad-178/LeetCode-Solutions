#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector <int> hash (k, 0);
        
        if (k%2==1) {
            for (int i=0; i<arr.size(); i++) {
                if (abs(arr[i])%k==0) continue;
                
                if (arr[i]>=0) {
                    hash[arr[i]%k]++;
                }
                else {
                    hash[abs(arr[i])%k]--;
                }
            }
            
            for (int i=1; i<k; i++) {
                if (hash[i]==0 || hash[k-i]==hash[i]) continue;
                else return false;
            }
            
            return true;
        }
        else {
            for (int i=0; i<arr.size(); i++) {
                if (abs(arr[i])%k==0) continue;
                
                if (arr[i]>=0) {
                    hash[arr[i]%k]++;
                }
                else {
                    hash[abs(arr[i])%k]--;
                }
            }
            
            for (int i=1; i<k; i++) {
                if (i==k/2) continue;
                
                if (hash[i]==0 || hash[i]==hash[k-i]) continue;
                else return false;
            }
            
            if (hash[k/2]%2 != 0) return false;
            
            return true;
        }
    }
};