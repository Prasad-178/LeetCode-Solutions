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
    bool hasCycle(ListNode *head) {
        ListNode *hare = head;
        ListNode *tortoise = head;
        
        while (hare!=NULL && hare->next!=NULL) {
            hare = hare->next->next;
            tortoise = tortoise->next;
            
            if (hare==tortoise) return true;
        }
        
        return false;
    }
};

int main() 
{
      

    return 0;
}