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
        int count = 0;
        while(head != NULL) {
            head = head->next;
            count++;

            if (count > 10001) return true;
        }
        return false;
    }
};

int main() 
{
      

    return 0;
}