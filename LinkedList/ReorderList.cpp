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
    void reorderList(ListNode* head) {

        if(!head || !head->next) return;

        ln fast = head;
        ln slow = head;

        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        ln second = slow->next;
        slow->next = NULL;
        ln prev = NULL;
        while(second){
            ln temp = second->next;
            second->next = prev;
            prev = second;
            second = temp;
        }

        ln first = head;
        ln second = prev;
        while(second){
            ln temp1 = first->next;
            ln temp2 = second->next;

            first->next= second;
            second->next = temp1;

            first = temp1;
            second = temp2;
            
        }
    }
};