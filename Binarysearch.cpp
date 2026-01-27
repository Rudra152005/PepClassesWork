// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> nums(n);
//     for(int i=0; i<n; i++){
//         cin>>nums[i];
//     }
//     int target;
//     cin>>target;
//     int l=0, r = n -1;
//     int mid = l + (r - l)/2;
//     while(l<=r){
//         if(nums[mid] == target){
//             cout<<mid;
//             return 0;
//         }
//         else if(nums[mid] < target){
//             l = mid + 1;
//         }
//         else{
//             r = mid - 1;
//         }
//         mid = l + (r - l)/2;
//     }
// }











// Binary search using recursively function
// #include<bits/stdc++.h>
// using namespace std;
// int binarySearch(vector<int>& arr, int low, int high, int target) {
//     if (low > high) return -1;

//     int mid = low + (high - low) / 2;

//     if (arr[mid] == target)
//         return mid;
//     else if (arr[mid] < target)
//         return binarySearch(arr, mid + 1, high, target);
//     else
//         return binarySearch(arr, low, mid - 1, target);
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int target;
//     cin >> target;
//     int result = binarySearch(arr, 0, n - 1, target);
//     if (result == -1)
//         cout << "Element not found" << endl;
//     else
//         cout << "Element found at index " << result << endl;
//     return 0;
// }