// Merge K sorted linked lists

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    Node* mergeKLists(vector<Node*>& arr) {
        // code here
        int n = arr.size();
        if(n==0) return NULL;
        Node* head = arr[0];
        for(int i=1; i<n; i++){
            head = merge(head, arr[i]);
        }
        return head;


        
    }
};

int main(){
    int n;
    cin>>n;
    vector<Node*> arr(n);
    for(int i=0; i<n; i++){
        arr[i] = takeInput();
    }
    Solution ob;
    Node* head = ob.mergeKLists(arr);
    print(head);
}
