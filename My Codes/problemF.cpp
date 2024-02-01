#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int d,m;
        cin>>d>>m;
        vector<int> v(m);
        for(int i=0; i<m; i++) {
            cin >> v[i];
        }

        int ans = 0;
        int rem = 0;
        bool ch = 1;
        for(int i=0; i<m; i++) {
            if(ch && v[i] >= 13) ans++;
            int num = v[i] + rem;
            rem = num % 7;

            if(!rem) {
                ch = 1;
            }
            else{
                ch = 0;
            }
        }
        cout << ans << endl;
    }
}
