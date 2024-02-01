#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n,mi = 0;
    cin>>m>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    cin>>arr[i];
    }
    sort(arr,arr+n);
    mi = arr[n-1] - arr[0];
    int ans = 0;
    for(int i=m; i<=n; i++){
        ans = arr[i-1] - arr[i-m];
        ans = abs(ans);
        mi = min(mi,ans);
    }
    cout<<mi<<endl;
    return 0;
}
