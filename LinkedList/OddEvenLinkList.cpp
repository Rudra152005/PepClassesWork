#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution{
    public:
    typedef ListNode* ln;
        ListNode* oddEvenList(ListNode* head) {

        if(!head || !head->next) return head;

        ln odd = head;
        ln even = head->next;
        ln evenhead = even;

        while(even && even->next){
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }

        odd->next = evenhead;

        return head;
    }
};