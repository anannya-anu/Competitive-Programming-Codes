#include<bits/stdc++.h>

using namespace std;
int main(){

    int n;
    cout<<"The size of the array: "<<endl;
    cin>>n;
    double a;
    for(int i=0; i<n; i++){
        cin>>a;
        double sub = a - (int)a;
        if(sub > 0){
            cout<<"The positive floating value is: "<<a<<endl;
        }
        else if(sub < 0){
            cout<<"The negative floating value is: "<<a<<endl;
        }
        else if(a > 0){
            cout<<"The positive value is: "<<a<<endl;
        }
        else if(a < 0){
            cout<<"The negative value is: "<<a<<endl;
        }
    }

    return 0;
}
