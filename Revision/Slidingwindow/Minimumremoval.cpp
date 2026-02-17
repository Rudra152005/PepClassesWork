// An array is considered balanced if the value of its maximum element is at most k times the minimum element.

// You may remove any number of elements from nums​​​​​​​ without making it empty.

// Return the minimum number of elements to remove so that the remaining array is balanced.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int l = 0;
        int maxLen = 0;

        for(int r = 0; r < n; r++) {
            
            
            while((long long)nums[r] > (long long)nums[l] * k) {
                l++;
            }

            
            maxLen = max(maxLen, r - l + 1);
        }

        return n - maxLen;
    }
};

int main(){
    int n, k;
    cin>>n>>k;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    Solution ob;
    cout<<ob.minRemoval(nums, k);
}
