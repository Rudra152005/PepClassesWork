#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool validPalindrome(string s){
        int n = s.size();
        int l =0, r = n - 1;

        while(l<r){
            while(l<r && !isalnum(s[l])){
                l++;
            }
            while(l<r && !isalnum(s[r])){
                r--;
            }

            if(tolower(s[l]) != tolower(s[r])){
                return false;
            }
            l++;
            r--;
        }

        return true;
    }
};