#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count = 0;
    cin>>n;
    string srr[n];
    for(int i=0; i<n; i++){
     cin>>srr[i];
     if(srr[i] == "Tetrahedron")
     {
         count += 4;
     }
     else if(srr[i] == "Cube"){
        count += 6;
     }
     else if(srr[i] == "Octahedron"){
        count += 8;
     }
     else if(srr[i] == "Dodecahedron"){
        count += 12;
     }
     else if(srr[i] == "Icosahedron"){
        count += 20;
     }

    }
    cout<<count<<endl;
    return 0;
}
