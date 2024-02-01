#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int ans = 0;
        string arr[10];
        for(int i=0; i<10; i++){
            cin>>arr[i];
            for(int j=0; j<10; j++){
                if(arr[i][j] == 'X'){
                    int row = i+1, col = j+1;
                    if(row == 1 || row == 10 || col == 1 || col == 10){
                        ans += 1;
                    }
                    else if(row == 2 || row == 9 || col == 2 || col == 9){
                        ans += 2;
                    }
                    else if(row == 3 || row == 8 || col == 3 || col == 8){
                        ans += 3;
                    }
                    else if(row == 4 || row == 7 || col == 4 || col == 7){
                        ans += 4;
                    }
                    else if(row == 5 || row == 6 || col == 5 || col == 6){
                        ans += 5;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
