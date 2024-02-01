#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(100000);
    v[0] = 0;
    v[1] = 1;
    for(int i = 2; i<v.size(); i++){
        if(i%2 == 0){
            v[i] = v[i/2];
        }
        else{
            v[i] = v[i/2] + v[i/2 + 1];
        }
    }

    int m = v[0];
    for(int i=1; i<v.size(); i++) {
        v[i] = max(m, v[i]);
        m = v[i];
    }

    int val;
    while(cin>>val){
        if(val == 0){
            break;
        }
        cout << v[val]<<endl;
    }
    return 0;
}
