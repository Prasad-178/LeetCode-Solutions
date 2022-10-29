#include <bits/stdc++.h>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head->next == NULL) {
            return NULL;
        } 
        
        ListNode *temp = head;
        int n = 0;
        
        while (temp != NULL) {
            temp = temp->next;
            n++;
        }
        
        int n2 = 0;
        temp = head;
        while (n2 < n/2-1) {
            temp = temp->next;
            n2++;
        }
        
        temp->next = (temp->next)->next;
        
        return head;
    }
};
