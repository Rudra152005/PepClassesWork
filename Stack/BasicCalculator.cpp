#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    int calculate(string s){
        stack<int> st;
        long long num = 0;
        long long res = 0;
        long long sign = 1;

        for(int i=0; i< s.size(); i++){
            if(isdigit(s[i])){
                num = num*10 + (s[i] - '0');
            }
            else if(s[i] == '+'){
                res += sign * num;
                num = 0;
                sign = 1;
            }
            else if(s[i] == ' -'){
                res += sign * num;
                num = 0;
                sign = -1;
            }
            else if(s[i] == '('){
                st.push(res);
                st.push(sign);
                res = 0;
                sign = 1;
            }

            else if(s[i] == ')'){
                res += sign * num;
                num = 0;
                res *= st.top();
                st.pop();
                res += st.top();
                st.pop();
            }
        }
        res += sign* num;
        return res;

    }
};