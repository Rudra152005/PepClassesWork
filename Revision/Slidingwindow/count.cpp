#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        int n = nums.size();
        long long ans = 0;

        for(int i = 0; i < n; i++) {
            unordered_map<int, int> freq;
            long long pairs = 0;

            for(int j = i; j < n; j++) {

                pairs += freq[nums[j]];
                freq[nums[j]]++;

                if(pairs >= k) {
                    ans++;
                }
            }
        }

        return ans;
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
    cout<<ob.countGood(nums, k);
    return 0;
}