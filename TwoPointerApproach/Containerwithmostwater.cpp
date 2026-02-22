#include<bits/std.cpp>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int r = n - 1;
        int ans = 0;

        while(l < r){
            int h = min(height[l], height[r]);
            int w = r - l;   
            ans = max(ans, h * w);

            if(height[l] < height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return ans;
    }
};

int main(){
    int n;
    cin>>n;
    vector<int> height(n);
    for(int i=0; i<n; i++){
        cin>>height[i];
    }
    Solution ob;
    cout<<ob.maxArea(height);
    return 0;
}