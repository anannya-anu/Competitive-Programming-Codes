#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s ="";
    for(int i=1; i<=n; i++)
    {
        if(i%2 == 1)
        {
            s = s+"I hate that ";
        }
        else
        {
            s = s+"I love that ";
        }
    }
    int len = s.length();
    s.erase(len-5);
    s = s+"it";
    cout<<s<<endl;

}
