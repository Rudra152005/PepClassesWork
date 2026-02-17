// Median of two sorted Array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        if(n > m){
            return findMedianSortedArrays(nums2, nums1);
        }

        int l = 0, r = n;

        while(l <= r){
            int curr1 = (l + r) / 2;
            int curr2 = (n + m + 1) / 2 - curr1;

            int l1 = (curr1 == 0) ? INT_MIN : nums1[curr1 - 1];
            int l2 = (curr2 == 0) ? INT_MIN : nums2[curr2 - 1];
            int r1 = (curr1 == n) ? INT_MAX : nums1[curr1];
            int r2 = (curr2 == m) ? INT_MAX : nums2[curr2];

            if(l1 <= r2 && l2 <= r1){
                
                if((n + m) % 2 == 0){
                    return (max(l1, l2) + min(r1, r2)) / 2.0;
                } else {
                    return max(l1, l2);
                }
            }
            else if(l1 > r2){
                r = curr1 - 1;
            }
            else{
                l = curr1 + 1;
            }
        }
        return 0.0;
    }
};