#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

vector <int> v;
class Solution {
public:
    void inorder(TreeNode *root) {
        if (root) {
            inorder(root->left);
            v.push_back(root->val);
            inorder(root->right);
        }
    }
    TreeNode* increasingBST(TreeNode* root) {
        v = {};
        inorder(root);
        for (int i=0; i<v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
        TreeNode *p = root;
        int n = v.size();
        for (int i=0; i<n; i++) {
            root->val = v[i];
            root->right = (TreeNode *) malloc (sizeof(TreeNode));
            root->left = NULL;
            root = root->right;
        }
        
        return root;
    }
};

int main() 
{
    

    return 0;
}