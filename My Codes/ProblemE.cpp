#include<bits/stdc++.h>
#define ll long long
#define sc scanf
#define pf printf
#define bigNumber 1000000

using namespace std;

vector<ll>digPrimeVec(bigNumber);

bool is_Prime(ll n){
    ll i;
    for(i=2; i*i<=n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

bool isDigPrime(ll val) {
    if(is_Prime(val)){
        ll sum = 0;
        while(val){
            sum += val%10;
            val = val/10;
        }
        if(is_Prime(sum)){
            return true;
        }
        return false;
    }
    return false;
}

void makeDigPrimeVec() {
    digPrimeVec[0]=0;
    digPrimeVec[1]=0;

    for(ll i=2; i<bigNumber; i++) {
        digPrimeVec[i] = digPrimeVec[i-1];
        if(isDigPrime(i)) {
            digPrimeVec[i] += 1;
        }
    }
}

int main(){
    makeDigPrimeVec();

    ll t;
    sc("%lld",&t);
    for(ll i=0; i<t; i++){
        ll r1, r2;
        sc("%lld %lld", &r1, &r2);
        pf("%lld\n", digPrimeVec[r2]-digPrimeVec[r1-1]);
    }
    return 0;
}
