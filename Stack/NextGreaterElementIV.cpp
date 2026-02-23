#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> secondGreateElement(vector<int>& nums){
        int n = nums.size();
        vector<int> ans(n, -1);

        stack<int> s1, s2;

        for(int i=0; i<n; i++){
            while(!s1.empty() && nums[i] > nums[s2.top()]){
                int prev = s2.top();
                ans[prev] = nums[i];
                s2.pop();
            }
            vector<int> temp;
            while(!s1.empty() && nums[i] > nums[s1.top()]){
                temp.push_back(s1.top());
                s1.pop();
            }
            for(int j = temp.size() - 1; j>= 0; j--){
                s2.push(temp[j]);
            }
            s1.push(i);
        }
        return ans;
    }
};