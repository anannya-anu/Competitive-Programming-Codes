#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int count =0;
        for(int i=0; i<s1.length(); i++){
            for(int j=i; j<s2.length(); j++){
                if(s1[i] == s2[j]){
                    count++;
                }
            }
        }

        cout<<count<<endl;
    }

    return 0;

}
