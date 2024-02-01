#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r,s1=0,s2=0;
        cin>>l>>r;
        int start = min(l,r);
        int end = max(l,r);
        for(int i=start-1; i<end; i++){
            s1 += a[i];
            s2 += b[i];
        }
        cout<<max(s1,s2)<<endl;
    }
}
