#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--){
        vector<ll> vec(3);
        ll m, sum = 0;
        for(int i=0; i<3; i++) {
            cin >> vec[i];
            sum += vec[i];
        }
        cin >> m;

        sort(vec.begin(), vec.end());

        ll rest = vec[2] - (vec[1]+vec[0]+1);
        ll mini = (rest > 0) ? rest : 0;
        ll mx = sum - 3;

        if(m >= rest && m <= mx) cout << "YES\n";
        else cout << "NO\n";
    }
}
