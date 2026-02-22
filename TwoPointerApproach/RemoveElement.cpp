#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int k = 0;
        for(int i=0; i<n; i++){
            if(nums[i] != val){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main(){
    int n, val;
    cin >> n >> val;              

    vector<int> arr(n);           
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    Solution obj;
    int k = obj.removeElement(arr, val);   

    cout << k << endl;            

    for (int i = 0; i < k; i++) { 
        cout << arr[i] << " ";
    }

    return 0;
}