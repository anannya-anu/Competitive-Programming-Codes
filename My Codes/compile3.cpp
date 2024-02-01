#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    //vector<char>v;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            s[i] = 'c';
        }
    }
    cout<<s;
return 0;
}
