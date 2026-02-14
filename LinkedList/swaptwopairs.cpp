#include<bits/stdc++.h>

struct ListNode{
    int val;
    ListNode* next;

    ListNode(int x, ListNode* n = nullptr){
        val= x;
        next = n;
    }
};
class Solution{
public:
    ListNode* swapspairs(ListNode* head){
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        ListNode* curr = head;

        while(curr && curr->next){
            ListNode* next = curr->next;
            curr->next = next->next;
            next->next = curr;
            prev->next = next;
            prev = curr;
            curr = curr->next;
        }

        return dummy->next;
        
    }

};