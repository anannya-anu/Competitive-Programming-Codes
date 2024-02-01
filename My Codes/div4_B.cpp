#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=0; i<3; i++){
            bool a=0, b=0, c=0;
            string s;
            cin >> s;
            for(int j=0; j<3; j++){
                char in = s[j];
                if(in == 'A') a=1;
                else if(in == 'B') b=1;
                else if (in == 'C') c=1;

                if(j == 2){
                    if(!a) cout<<"A"<<endl;
                    else if(!b) cout<<"B"<<endl;
                    else if (!c) cout<<"C"<<endl;
                }
            }
        }
    }
    return 0;
}
