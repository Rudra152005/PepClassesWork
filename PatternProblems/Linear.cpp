#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> name;
    name.push_back("abc");
    name.push_back("abc0");
    name.push_back("abc1");
    name.push_back("abc1");
    int cnt = 0;
    for(string str : name){
        bool enddigit = (str.back() >= '0' && str.back() <= '9');
        cnt += enddigit;
    }
    cout<<cnt<<endl;
    return 0;

}