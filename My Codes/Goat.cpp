#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,val;
    cin>>t;
   double arr[t];
   for(int i=1; i<=t; i++){
    cin>>arr[i];
   }
   double max = arr[1],s1=0;
   int mp;
   for(int i=1; i<=t; i++){
    if(arr[i] >= max){
        max = arr[i];
        mp = i;
    }
    s1 += arr[i];

   }
   s1 = s1-max;
   cout<<mp<<" "<<s1/int(t-1)<<endl;

   return 0;
}
