// Given the head of a linked list, rotate the list to the right by k places.

#include <bits/stdc++.h>
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

    ListNode* rotateRight(ListNode* head, int k) {

        if(head == NULL || head->next == NULL || k == 0)
            return head;

        
        int length = 0;
        ln temp = head;
        while(temp){
            length++;
            temp = temp->next;
        }

        
        k = k % length;
        if(k == 0) return head;

        ln dummy = new ListNode(0);
        dummy->next = head;

        ln left = dummy;
        ln right = dummy;

        
        for(int i = 0; i < k; i++){
            right = right->next;
        }

        
        while(right->next){
            left = left->next;
            right = right->next;
        }

        
        ln newhead = left->next;
        left->next = NULL;
        right->next = head;

        return newhead;
    }
};