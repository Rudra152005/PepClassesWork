#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {

        int n = mat.size();
        int m = mat[0].size();

        int l =0, r = m - 1;
        while(l< n && r>=0){
            if(mat[l][r] == target){
                return true;
            }
            else if(mat[l][r] < target){
                l++;
            }
            else{
                r--;
            }
        }
        return true;
        
    }
};

int main(){
    int n,m,target;
    cin>>n>>m>>target;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    Solution obj;
    cout<<obj.searchMatrix(arr,target);
    return 0;
}