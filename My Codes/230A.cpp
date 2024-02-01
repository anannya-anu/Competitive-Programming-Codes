#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,n,count = 0;
    cin>>s>>n;
    pair<int,int> arr[1000];
    for(int i=0; i<n; i++){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i++){
        if(s <= arr[i].first){
                count++;
            break;
        }
        else{
        s = s+arr[i].second;
        }
    }
    if(count>0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}
