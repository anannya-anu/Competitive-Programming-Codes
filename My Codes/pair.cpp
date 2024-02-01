#include<bits/stdc++.h>
using namespace std;

int main(){
map<string,int> marksMap;
marksMap["H"] = 99;
marksMap["t"]= 90;
marksMap["i"] = 80;

marksMap.insert({{"k",87},{"r",34}});

map<string,int> :: iterator it;
for(it = marksMap.begin(); it!= marksMap.end(); it++){
cout<<(*it).first<<" "<<(*it).second<<"\n";
cout<<marksMap.size()<<endl;
}


}
