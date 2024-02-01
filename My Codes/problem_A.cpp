#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,val;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++){
        cin>>v[i];
        val = *min_element(v.begin(),v.end());
    }
    cout<<val;
}
