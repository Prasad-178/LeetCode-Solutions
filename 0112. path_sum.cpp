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
    bool rec(TreeNode * root, int sum, int targetSum) {
        sum = sum + root->val;
        
        if (root->left == NULL && root->right == NULL) {
            if (sum == targetSum) {
                return true;
            }
            return false;
        }
        
        if (root->right && !root->left) {
            return rec(root->right, sum, targetSum);
        }
        
        if (root->left && !root->right) { 
            return rec(root->left, sum, targetSum);
        }
        
        return rec(root->left, sum, targetSum) || rec(root->right, sum, targetSum);
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == NULL) return false;
        if (root->left==NULL && root->right==NULL && root->val == targetSum) {
            return true;
        }
        if (root->val == targetSum && (root->left == NULL || root->right == NULL)) {
            return false;
        }
        return rec(root, 0, targetSum);
    }
};