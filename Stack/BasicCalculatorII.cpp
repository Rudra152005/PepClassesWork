#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    int calculator(string s){
        long long num = 0;
        stack<int> st;
        char sign = '+';

        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i])){
                num = num * 10 + (s[i] - '0');

                if((!isdigit(s[i]) && s[i] != ' ') || i == s.size() - 1){
                    if(sign == '+'){
                        st.push(num);
                    }
                    else if(sign == '-'){
                        st.push(-num);
                    }
                    else if(sign == '*'){
                        long long temp = st.top();
                        st.pop();
                        st.push(temp*num);
                    }
                    else if(sign == '-'){
                        long long top = st.top();
                        st.pop();
                        st.push(top/num);   
                    }
                    num = 0;
                    sign = s[i];
                }
            }

        }
        long long res = 0;
        while(!st.empty()){
            res += st.top();
            st.pop();
        }

        return res;
    }
    
};