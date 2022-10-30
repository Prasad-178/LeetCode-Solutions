#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector <vector <int> > ans = {};
        vector <Node> q = {};
        
        if (root==NULL) {
            return ans;
        }
        
        vector <int> temp = {root->val};
        q.push_back(*root);
        ans.push_back(temp);
        while (q.size() != 0) {
            int n = temp.size();
            temp = {};
            for (int i=0; i<n; i++) {
                for (int j=0; j<q[i].children.size(); j++) {
                    temp.push_back(q[i].children[j]->val);
                    q.push_back(*(q[i].children[j]));
                }
                
                q.erase(q.begin());
                i--; n--;
            }
            if (temp.size() != 0) {
                ans.push_back(temp);
            }
        }
        
        return ans;
    }
};