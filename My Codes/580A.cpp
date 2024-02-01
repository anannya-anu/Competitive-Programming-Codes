#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=1,cnt=1;
    cin>>n;
    int arr[n];


    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    for(int i=0; i<n-1; i++){
        if(arr[i+1] < arr[i]){
            if(ans<cnt){
                    ans = cnt;
            }
            cnt = 1;
            continue;
        }
        cnt++;
    }
    if(ans<cnt){
        ans = cnt;
    }
    cout<<ans<<endl;
    return 0;
}
