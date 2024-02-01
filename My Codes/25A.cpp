#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c1 = 0, c2 = 0;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]%2 == 0){
            c1++;
        }
        else{
            c2++;
        }
    }
    if(c1>c2){
            for(int i=0; i<n; i++){
                if(arr[i] % 2 != 0){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
        else{
            for(int i=0; i<n; i++){
                if(arr[i] % 2 == 0){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
        return 0;
}

