// Intersection of Two Arrays
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int> s(nums1.begin(), nums1.end());
        vector<int> ans;
        for(int i=0; i<nums2.size(); i++){
            if(s.find(nums2[i]) != s.end()){
                ans.push_back(nums2[i]);
                s.erase(nums2[i]);
            }

        }
        return ans;
    }
};
int main(){
    int n, m;
    cin>>n>>m;
    vector<int> nums1(n), nums2(m);
    for(int i=0; i<n; i++){
        cin>>nums1[i];
    }
    for(int i=0; i<m; i++){
        cin>>nums2[i];
    }
    Solution ob;
    vector<int> ans = ob.intersection(nums1, nums2);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}