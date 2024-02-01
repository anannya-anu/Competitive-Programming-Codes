#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a;
        ll sum=0;
        cin>>a;
        for(ll i=0; i<a; i++){
            ll b;
            cin>>b;
            sum += b;
        }
        ll var = sqrt(sum);
        if (var * var == sum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
