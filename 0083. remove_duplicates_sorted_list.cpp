#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<math.h>
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
    ListNode* deleteDuplicates(ListNode* head) {
        vector <int> v;
        ListNode *q = head;
        while (q != NULL) {
            v.push_back(q->val);
            q = q->next;
        }

        int n = v.size();

        ListNode *p = head;
        int ct = 0;
        for (int i=1; i<n-1; i++) {
            if (v[i] != v[i-1] && v[i] != v[i+1]) {
                if (ct == 0) {
                    p = (ListNode *) malloc (sizeof(ListNode));
                    p->val = v[i];
                    p->next = NULL;
                    head = p;
                    ct++;
                }
                else {
                    p->next = (ListNode *) malloc (sizeof(ListNode));
                    p = p->next;
                    p->val = v[i];
                    p->next = NULL;
                }
            }
            else {
                continue;
            }
        }

        if (v[n-1] != v[n-2]) {
            ListNode *r = (ListNode *) malloc (sizeof(ListNode));
            r->val = v[n-1];
            p->next = r;
            p = p->next;
            p->next = NULL;
            free(r);
        }
        if (v[0] != v[1]) {
            ListNode *r = (ListNode *) malloc (sizeof(ListNode));
            r->val = v[0];
            r->next = head;
            head = r;
            free(r);
        }

        // p->next = NULL;
        return head;
    }
};

int main() 
{
    

    return 0;
}