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
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow=head, *fast=head;
        while (slow!=NULL && fast!=NULL) {
            slow = slow->next;
            if (fast->next!=NULL) fast = fast->next->next;
            else return NULL;
            if (slow==fast) break;
        }
        if (slow!=fast) return NULL;
        
        slow = head;
        
        while (slow!=fast) {
            slow = slow->next;
            fast = fast->next;
        }
        
        return fast;
    }
};