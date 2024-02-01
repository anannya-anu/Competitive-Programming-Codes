#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int>v;

    for(int i=1; i<=k; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    vector<int>vec;
    for(int i=1; i<v.size(); i++){
            if(v[i]==v[i+1]){
                v.erase(v.begin()+i);
                i=1;
            }
            cout <<"->"<< v.size() << endl;
    }

    /*int i=1,c=0,pos=0;
    while(true){
        if(i==vec[0]){
            v.erase(v.begin());
        }
        cout << "->" << vec[0];
        i++;
        c++;

        if(i==n){
            i=1;
        }

        if(vec.empty()){
            break;
        }
    }cout << endl;
    cout << c << endl;*/
}
//4 3
//3 2 3
//2 3 3
