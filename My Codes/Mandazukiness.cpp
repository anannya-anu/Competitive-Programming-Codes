#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string source = "MANDZUKIC";
    while(t--){
        string s;
        cin>>s;
        int len = s.size();
        int ans = 0;
        for(int i=0; i<len; i++){
            int match = 0;
            for(int j=i, k=0; j<min(i+9, len); j++, k++){
                if(source[k] == s[j]) match++;
                else break;
            }
            ans = max(ans, match);
        }
        cout<<ans<<endl;
    }

    return 0;
}
