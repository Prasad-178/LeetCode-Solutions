#include <bits/stdc++.h>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector <int> arr = {};
    void inorder(TreeNode* root) {
        if (root) {
            inorder(root->left);
            arr.push_back(root->val);
            inorder(root->right);
        }    
    }
    
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
        if (arr.size() == 1) {
            return false;
        }
        
        int right=arr.size()-1, left=0;
        
        while (k != arr[right] + arr[left]) {
            if (right == left) {
                return false;
            }
            
            if (arr[right] + arr[left] > k) {
                right--;
            }
            else {
                left++;
            }
        }
        
        if (arr[right] + arr[left] == k && right != left) {
            return true;
        }
        return false;
    }
};
