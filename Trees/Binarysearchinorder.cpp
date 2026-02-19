// Inorder traversal in Binary search tree

#include<bits/stdc++.h>
using namespace std;


struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        left=NULL;
        right=NULL;
    }
};

// Using stack
class Solution{
    public:
    vector<int> inorderTraversal(TreeNode* root){
        vector<int> ans;
        stack<TreeNode*> st;

        while(!st.empty() || root!=NULL){
            if(root!=NULL){
                st.push(root);
                root=root->left;
            }
            else{
                root=st.top();
                st.pop();
                ans.push_back(root->val);
                root=root->right;
            }
        }
        return ans;
    }
};


// using recursion

class recursion{
    public: 
    vector<int> ans;
    void inordered(TreeNode* node){
        if(node == NULL){
            return;
        }

        inordered(node->left);
        ans.push_back(node->val);
        inordered(node->right);


    }

    vector<int> inorderTraversal(TreeNode* root){
        inordered(root);
        return ans;
    }
};