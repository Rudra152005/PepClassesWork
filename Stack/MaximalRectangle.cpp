#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:

    int maximalreactangle(vector<vector<int>>& matrix){
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> hist(m, 0);
        int ans = 0;

        for(int i=0; i<n; i++){
            for(int j =0; j<m; j++){
                if(matrix[i][j] == '1') hist[j]++;
                else{
                    hist[j] = 0;
                }
            }
            stack<int> st;
            for(int k =0; k<m; k++){
                int currh= (k == m) ? 0:hist[k];
                while(!st.empty() && currh < hist[st.top()]){
                    int h = hist[st.top()];
                    st.pop();
                    int width;
                    if(st.empty()) width = k;
                    else width = k - hist[st.top()] - 1;
                    ans = max(ans, width*h);
                }
                st.push(k);
            }
        }
        return ans;
    }

};