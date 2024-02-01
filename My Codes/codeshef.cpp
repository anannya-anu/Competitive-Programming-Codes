#include <bits/stdc++.h>
using namespace std;

int main() {
    //std::vector<int> A;
   // vector<int> B;
    int a1,b1,a2,b2,a3,b3;
    cin>>a1>>a2>>a3>>b1>>b2>>b3;
    /*A.push_back(a1);
    A.push_back(a2);
    A.push_back(a3);
    B.push_back(b1);
    B.push_back(b2);
    B.push_back(b3);*/
    int perpendicular = ((a1*b1) + (a2*b2) +(a3*b3));
    int parallel = ((a2*b3)- (a3*b2)) - ((a1*b3) - (b1*a3)) + ((a1*b2) - (a2*b1));
    if(parallel == 0){
    cout<<1<<endl;
    }
    else if(perpendicular == 0){
    cout<<2<<endl;
    }
    else{
    cout<<0<<endl;
    }




	return 0;
}

