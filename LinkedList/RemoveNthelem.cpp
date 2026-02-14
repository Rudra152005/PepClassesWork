#include<bits/stdc++.h>

struct ListNode{
    int val;
    ListNode* next;

    ListNode(int x, ListNode* n = nullptr){
        val = x;
        next = n;
    }

};
class Solution{
public:
    typedef ListNode* ln;
    ListNode* removeelemet(ListNode* head, int n){
        ln dummy = new ListNode(0);
        dummy->next = head;
        ln left = dummy;
        ln right = dummy;
        for(int i=0; i<n; i++){
            right = right->next;
        }

        while(right->next){
            left = left->next;
            right = right->next;
        }

        ln nddele = left->next;
        left->next = left->next->next;
        delete nddele;

        return dummy->next;

    }
};