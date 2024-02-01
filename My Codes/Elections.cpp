#include<bits/stdc++.h>
using namespace std;

int main(){

    int t, arr[3];
    cin >> t;
    for(int i=0; i<t; i++){
        int maxi, count=0, ans1, ans2, ans3;
        for(int j=0; j<3; j++){
            cin>>arr[j];
        }
        maxi = max(max(arr[0], arr[1]), arr[2]);
        for(int j=0; j<3; j++){
            if(maxi == arr[j]){
                count++;
            }
        }
        if(count == 1){
            if(maxi == arr[0]){
               ans1 = 0;
            }
            else{
                ans1 = maxi -arr[0]+1;
            }
            if(maxi == arr[1]){
                ans2 = 0;
            }
            else{
                ans2 = maxi - arr[1]+1;
            }
            if(maxi == arr[2]){
                ans3 = 0;
            }
            else{
                ans3 = maxi-arr[2]+1;
            }
        }
        else{
            ans1 = maxi - arr[0]+1;
            ans2 = maxi - arr[1]+1;
            ans3 = maxi - arr[2]+1;
        }

        cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;

    }
    return 0;
}
