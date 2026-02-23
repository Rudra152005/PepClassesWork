#include<bits/stdc++.h>
using namespace std;

class CustomStack {
private:
    vector<int> st;
    int size;
public:
    CustomStack(int maxSize) {
        size = maxSize;
        
    }
    
    void push(int x) {
        if(st.size() <size){
            st.push_back(x);
        }
        
    }
    
    int pop() {
        if(st.empty()) return -1;
        int ans = st.back();
        st.pop_back();
        return ans;
        
    }
    
    void increment(int k, int val) {
        int limit = min(k, (int)st.size());
        for(int i=0; i<limit; i++){
            st[i] += val;
        }
        
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */