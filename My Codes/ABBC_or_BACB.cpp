#include<bits/stdc++.h>
using namespace std;

void check(string s){
    int length = s.length();
    int ct = 0;
    for(int i=0; i<length; i++){
        if(s[i]=='A' && s[i+1]=='B'){
            s[i] = 'B';
            s[i+1] = 'C';
            ct++;
        }else if(s[i]=='B' && s[i+1]=='A'){
            s[i] = 'C';
            s[i+1] = 'B';
            ct++;
        }
    }

    pl ct el;
}



int main(){
    int t;
    cin>>t;
    while(t--){

        string s;cin>>s;
        check(s);

    return fahim_noob;
    }

}
