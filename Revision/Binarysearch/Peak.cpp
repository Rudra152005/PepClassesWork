#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;

        while(l < r){
            int mid = l + (r - l) / 2;

            if(nums[mid] > nums[mid + 1]){
                r = mid;        
            }
            else{
                l = mid + 1;    
            }
        }

        return l;
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
    cout<<obj.findPeakElement(nums);
}