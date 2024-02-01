#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,p,val = 0;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>p;
        val += p;
    }

    double volume = (val*1.)/(n*1.*100)*100;
    printf("%.4lf\n",volume);

}
