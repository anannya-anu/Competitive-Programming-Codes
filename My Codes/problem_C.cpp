#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,maxi=1;
        cin>>n;
        int arr[n];
        for(int j=0; j<n; j++){
            cin>>arr[j];
            maxi = max(maxi,arr[j]);
        }
        cout<<maxi<<endl;
    }
    return 0;
}
