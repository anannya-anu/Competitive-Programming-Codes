#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    getline(cin,s);
    cout << s<<endl;
    map<char,int>m;
    for(char c: s){
        m[c]++;
    }

    for(auto t: m) {
        if(t.second > 1) {
            cout << t.first << " -> " <<t.second<<endl;
        }
    }
    return 0;
}
