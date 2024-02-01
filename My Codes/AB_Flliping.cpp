#include<bits/stdc++.h>
using namespace std;

int mian()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = n-1;
        for(int i=n-1; i>=0; i++)
        {
            if(s[i] == 'B')
            {
                ans--;
            }
            else
            {
                break;
            }
        }
        for(int i=n-1; i>=0; i++)
        {
            if(s[i] == 'A')
            {
                ans--;
            }
            else
            {
                break;
            }
        }

        cout<<ans<<endl;


    }
    return 0;


}
