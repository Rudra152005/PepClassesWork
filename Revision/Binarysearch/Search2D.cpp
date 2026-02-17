#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        int i = 0, j = m-1;
        
        while(i < n && j >= 0){
            if(matrix[i][j] == target) return true;
            else if(matrix[i][j] > target) j--;
            else i++;
        }
        
        return false;
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
