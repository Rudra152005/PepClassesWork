#include<bits/stdc++.h>
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
    typedef ListNode* ln;
    ListNode* partition(ListNode* head, int x) {

        ln beforedummy = new ListNode(0);
        ln afterdummy = new ListNode(0);

        ln before = beforedummy;
        ln after = afterdummy;
        while(head){
            if(head->val < x){
                before->next = head;
                before = before->next;
            }
            else{
                after->next = head;
                after = after->next;
            }
            head = head->next;
        }
        
        after->next = NULL;
        before->next = afterdummy->next;
        return beforedummy->next;
    }
};