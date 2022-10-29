#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == NULL) return NULL;
        if (root->val < val) {
            return searchBST(root->right, val);
        }
        else if (root->val > val) {
            return searchBST(root->left, val);
        }
        else {
            return root;
        }
    }
};

int main() 
{
    

    return 0;
}