#include<bits/stdc++.h>
using namespace std;

int sqrt(int x){

    if (x<2) return x;
    int left = 1, right = x/2;
    int ans = 0;

    while(left <= right){
        int mid = left + (right - left )/2;

        if(mid <= x/mid){
            ans = mid;
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return ans;
};

int main(){

    int n;
    cin>>n;
    cout<<sqrt(n);

    return 0;
}