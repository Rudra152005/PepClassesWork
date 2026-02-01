#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0; i < nums.size(); i++){
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
    cin >> n >> val;              // n = size, val = value to remove

    vector<int> arr(n);           // size should be n
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    Solution obj;
    int k = obj.removeElement(arr, val);   // pass correct variables

    cout << k << endl;            // print count of valid elements

    for (int i = 0; i < k; i++) { // print only first k elements
        cout << arr[i] << " ";
    }

    return 0;
}
