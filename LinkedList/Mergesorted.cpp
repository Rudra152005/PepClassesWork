// Merge K sorted linked lists

// Input: head1 → 1 → 3 → 7 → NULL

//      head2 → 2 → 4 → 8 → NULL

//      head3 → 9 → NULL
   
// Output: 1 -> 2 -> 3 -> 4 -> 7 -> 8 -> 9
// Explanation: The arr[] has 3 sorted linked list of size 3, 3, 1.
// 1st list: 1 -> 3 -> 7
// 2nd list: 2 -> 4 -> 8
// 3rd list: 9
// The merged list will be: 

#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
}; 
class Solution {
  public:
    typedef Node* ln;
    Node* mergeKLists(vector<Node*>& arr) {
        // code here
        
    }
};
    