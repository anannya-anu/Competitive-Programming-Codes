#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    vector<char>v;
    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'o' || s1[i] == 'u' || s1[i] == 'i' || s1[i] == 'A' || s1[i] == 'E' || s1[i] == 'I' || s1[i] == 'O' || s1[i] == 'U')
        {
            s1[i] = 0;
            v.push_back(s1[i]);
        }
    }
    for(int i=0; i<s2.length(); i++)
    {
        if(s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'o' || s2[i] == 'u' || s2[i] == 'i' || s2[i] == 'A' || s2[i] == 'E' || s2[i] == 'I' || s2[i] == 'O' || s2[i] == 'U')
        {
            s2[i] = 0;
            v.push_back(s2[i]);
        }
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
    /*for(int i=0; i<s1.length(); i++){
            for(int j=0; j<s2.length(); j++){
                if(s1[i] == s2[j]){
                    cout<<s1[i]<<endl;
                }
            }

    }*/


}
