#include<bits/stdc++.h>
using namespace std;

#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int n = nums2.size();
        vector<int> ans(n, -1);
        stack<int> st;

        
        for(int i = 0; i < n; i++) {
            while(!st.empty() && nums2[i] > nums2[st.top()]) {
                int prev = st.top();
                st.pop();
                ans[prev] = nums2[i];
            }
            st.push(i);
        }

        
        vector<int> res;

        for(int i = 0; i < nums1.size(); i++) {

            for(int j = 0; j < n; j++) {
                if(nums2[j] == nums1[i]) {
                    res.push_back(ans[j]);
                    break;
                }
            }
        }

        return res;
    }
};