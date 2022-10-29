#include<iostream>
#include<vector>
#include<algorithm>
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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL) return head;
        ListNode *p = head;
        int n = 0, temp, nex;
        while (p != NULL)
        {
            p = p->next;
            n++;
        }
        p = head;
        k = k%n;
        if (k==0) return head;

        vector <int> v = {};
        for (int i=0; i<n-k; i++)
            p = p->next;
        
        for (int i=0; i<k; i++)
        {
            v.push_back(p->val);
            p = p->next;
        }
        p = head;
        for (int i=0; i<n-k; i++)
        {
            v.push_back(p->val);
            p = p->next;
        }
            
        p = head;
        for (int i=0; i<n; i++)
        {
            p->val = v[i];
            p = p->next;
        }
            
        return head;
    }
};

int main() 
{
    

    return 0;
}