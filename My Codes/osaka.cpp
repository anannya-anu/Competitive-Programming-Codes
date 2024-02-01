#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    vector<ll> v;
    for(ll i=1; i <= 1000000; i++){
        if(i% 3 == 0) v.push_back(i);
        else if(i % 5 == 0) v.push_back(i);
    }
    ll n;
    while(cin>>n){
        cout<<v[n-1]<<endl;
    }
    return 0;

}
