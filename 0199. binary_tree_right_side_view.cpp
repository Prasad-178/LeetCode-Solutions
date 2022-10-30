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
    vector<int> rightSideView(TreeNode* root) {
        vector <TreeNode> q = {};
        vector <int> ans = {};
        if (root == NULL) {
            return ans;
        }
        
        q.push_back(*root);
        vector <int> temp = {root->val};
        ans.push_back(temp[temp.size()-1]);
        while (q.size() != 0) {
            int n = temp.size();
            temp = {};
            for (int i=0; i<n; i++) {
                if (q[i].left != NULL) {
                    temp.push_back((q[i].left)->val);
                    q.push_back(*(q[i].left));
                }
                
                if (q[i].right != NULL) {
                    temp.push_back((q[i].right)->val);
                    q.push_back(*(q[i].right));
                }
                
                q.erase(q.begin());
                i--; n--;
            }
            if (temp.size() != 0) {
                ans.push_back(temp[temp.size()-1]);    
            }
        }
        
        return ans; 
    }
};