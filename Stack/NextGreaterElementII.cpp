#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);
        stack<int> st;
        for(int i=0; i< 2*n; i++){
            int ind = i%n;
            while(!st.empty() && nums[ind] > nums[st.top()]){
                int pre = st.top();
                st.pop();
                ans[pre] = nums[ind];

            }
            if(i<n){
                st.push(i);
            }
        }
        return ans;
    }
};