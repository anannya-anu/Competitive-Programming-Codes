#include<bits/stdc++.h>
#define ll long long
using namespace std;

int isPrime(ll n){
    for(ll i=2; i<=sqrt(n); i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<ll>v;
       ll num = stoi(s);
       if(isPrime(num)){
        break;
       }
       while(num){
        ll val = 0;
         val += num%10;
         num = num/10;
        v.push_back(val);
       for(int i=0; i<v.size(); i++){
        cout<<v[i];
       }
       }
    }
}


