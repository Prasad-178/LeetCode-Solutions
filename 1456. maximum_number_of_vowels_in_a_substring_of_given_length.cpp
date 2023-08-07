#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    bool isVowel(char ch) {
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') return true;
        else return false;
    }
    
    int maxVowels(string s, int k) {
        int ct = 0;
        int maxi = 0;
        for (int i=0; i<k; i++) {
            if (isVowel(s[i])) ct++;
        }
        maxi = max(ct, maxi);
        
        for (int i=k; i<s.length(); i++) {
            if (isVowel(s[i-k])) ct--;
            if (isVowel(s[i])) ct++;
            
            maxi = max(ct, maxi);
        }
        
        return maxi;
    }
};