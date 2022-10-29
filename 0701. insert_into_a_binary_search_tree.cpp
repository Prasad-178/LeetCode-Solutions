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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == NULL) {
            TreeNode * temp = new TreeNode();
            temp->val = val;
            temp->right = temp->left = NULL;
            root = temp;
            return root;
        }
        
        TreeNode * temp = root;
        
        TreeNode * newNode = new TreeNode();
        newNode->val = val;
        newNode->left = newNode->right = NULL;
        
        while (1) {
            if (temp->left && temp->right) {
                if (val > temp->val) {
                    temp = temp->right;
                }
                else {
                    temp = temp->left;
                }
            }
            else if (temp->right && !temp->left) {
                if (val > temp->val) {
                    temp = temp->right;
                }
                else {
                    temp->left = newNode;
                    return root;
                }
            }
            else if (temp->left && !temp->right) {
                if (val < temp->val) {
                    temp = temp->left;
                }
                else {
                    temp->right = newNode;
                    return root;
                }
            }
            else {
                if (val > temp->val) {
                    temp->right = newNode;
                }
                else {
                    temp->left = newNode;
                }
                return root;
            }
        }
    }
};
