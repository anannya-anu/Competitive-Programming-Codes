#include<bits/stdc++.h>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    int odd = 0;
    for(int i=0; i<r; i++){
        if(i%2 == 0){
            for(int j=0; j<c; j++){
                cout<<"#";
            }
        }
        else{
            ++odd;
            for(int j=0; j<c; j++){
                if(odd%2 == 1 && j == c-1){
                    cout<<"#";
                }
                else if(odd % 2 == 0 && j == 0){
                    cout<<"#";
                }
                else{
                    cout<<".";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
