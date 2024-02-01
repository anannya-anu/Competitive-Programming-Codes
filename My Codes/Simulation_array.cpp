#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i=0; i<n; i++){
                cin>>arr[i];
        }
        while(m--){
            char c;
            cin>>c;
            if(c == 'S'){
                int d;
                cin>>d;
                for(int i=0; i<n; i++){
                     arr[i] = arr[i]+d;
                }
            }
            else if(c == 'M'){
                int d;
                cin>>d;
                for(int i=0; i<n; i++){
                     arr[i] = arr[i]*d;
                }
            }
            else if(c == 'D'){
                int k;
                cin>>k;
                for(int i=0; i<n; i++){
                    arr[i] = arr[i]/k;
                }
            }
            else if(c == 'P'){
                int y,z,temp;
                cin>>y>>z;
                temp = arr[y];
                arr[y] = arr[z];
                arr[z] = temp;
            }
            else if(c == 'R'){
                reverse(arr,arr+n);
            }
        }
        cout<<"Case "<<i<<":"<<endl;
        for(int i=0; i<n-1; i++){
            cout<<arr[i]<<" ";
        }
        cout<<arr[n-1]<<endl;
    }
    return 0;
}
