#include<bits/stdc++.h>
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
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode *rear = NULL;
        ListNode *curr = head;
        ListNode *front = head->next;

        while (curr != NULL)
        {
            curr->next = front->next;
            front->next = curr;
            if (rear == NULL) head = front;
            else rear->next = front;

            rear = curr;
            curr = curr->next;
            if (curr == NULL) return head;
            else front = curr->next;

            if (front == NULL) return head;
        }

        return head;
    }
};

int main() 
{
    Solution s;

    return 0;
}