#include<bits/stdc++.h>
using namespace std;

int reverse(int a){
    long long re, rev = 0;
    while(a != 0){
        re = a%10;
        rev = rev*10 + re;
        a = a/10;
    }
    return rev;
}

int main(){
    long long n;
    cin>>n;
    while(n--){
        long long a,b;
        cin>>a>>b;
        long long ans = reverse(a) + reverse(b);
        int val = reverse(ans);
        cout<<val<<endl;
    }
    return 0;

}
