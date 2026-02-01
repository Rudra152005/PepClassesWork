// container with Most water

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0, r = n - 1;
        int area = 0;

        while (l < r) {
            int h = min(height[l], height[r]);  
            int w = r - l;                     
            area = max(area, h * w);

            
            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }

        return area;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Solution ob;
    cout<<ob.maxArea(arr);
}