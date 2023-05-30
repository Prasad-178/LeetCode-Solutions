#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        while (node->next->next != NULL) {
            node->val = node->next->val;
            node = node->next;
        }
        node->val = node->next->val;
        node->next=NULL;
    }
};