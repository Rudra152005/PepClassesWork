#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {

        int n = nums.size();
        int l = 0, r = n - 1;
        while(l < r){
            int mid = l + (r - l)/2;
            if(nums[mid]>nums[r]){
                l = mid + 1;
            }
            else if(nums[mid] < nums[r]){
                r = mid;
            }
            else{
                r--;
            }
        }

        return nums[l];
        
    }
};
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    Solution obj;
    cout<<obj.findMin(nums);
}