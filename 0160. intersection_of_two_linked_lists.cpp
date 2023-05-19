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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1 = headA, *temp2 = headB;
        int ct1 = 0, ct2 = 0;
        
        while (temp1!=NULL) {
            ct1++;
            temp1 = temp1->next;
        }
        
        while (temp2!=NULL) {
            ct2++;
            temp2 = temp2->next;
        }
        
        temp1=headA, temp2=headB;
        while (ct1>ct2) {
            ct1--;
            temp1 = temp1->next;
        }
        
        while (ct2>ct1) {
            ct2--;
            temp2 = temp2->next;
        }
        
        while (temp1!=NULL) {
            if (temp1==temp2) return temp1;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        return NULL;
    }
};