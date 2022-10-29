// to make it more space efficient, traverse till half the linked list and then check conditions (im lazy sry)
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
    bool isPalindrome(ListNode* head) {
        vector <int> v;
        ListNode *p = head;
        while (p != NULL) {
            v.push_back(p->val);
            p = p->next;   
        }

        int front = 0;
        int back = v.size()-1;

        while (front <= back) {
            if (v[front] == v[back]) {
                front++;
                back--;
            }
            else {
                return false;
            } 
        }
        return true;
    }
};

int main() 
{
    

    return 0;
}