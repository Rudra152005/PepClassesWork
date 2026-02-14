#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;

    ListNode(int x, ListNode* n = nullptr){
        val = x;
        next = n;
    } 
};

class Solution {
public:
    typedef ListNode* ln;

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ln dummy = new ListNode(0);
        ln temp = dummy;
        int carry = 0;

        while(l1 || l2 || carry){

            int sum = carry;

            if(l1){
                sum += l1->val;
                l1 = l1->next;
            }

            if(l2){
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;

            temp->next = new ListNode(sum % 10);
            temp = temp->next; 
        }

        return dummy->next;
    }
};


// 🔹 Function to print linked list
void printList(ListNode* head){
    while(head){
        cout << head->val;
        if(head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}


// 🔹 Main Function
int main(){

    // Creating first number: 342 → [2,4,3]
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    // Creating second number: 465 → [5,6,4]
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    Solution obj;
    ListNode* result = obj.addTwoNumbers(l1, l2);

    cout << "Result: ";
    printList(result);

    return 0;
}
