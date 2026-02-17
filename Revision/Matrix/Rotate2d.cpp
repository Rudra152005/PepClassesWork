// given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        for(int i=0; i<n; i++){
            for(int j= i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
        
    }
};
int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    Solution ob;
    ob.rotate(arr);
}