#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
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
    vector <int> ans;   
    vector<int> rightSideView(TreeNode* root) {
        if (root->left == NULL && root->right == NULL && root != NULL) 
        {
            ans.push_back(root->val);
        }
        else if (root->left == NULL && root->right != NULL)
        {
            ans.push_back(root->val);
            return rightSideView(root->right);
        }
        else if (root->right == NULL && root->left != NULL)
        {
            ans.push_back(root->val);
            return rightSideView(root->left);
        }
        else
        {
            ans.push_back(root->val);
            return rightSideView(root->right);
        }
        
        return ans;
    }
};

int main() 
{
    

    return 0;
}