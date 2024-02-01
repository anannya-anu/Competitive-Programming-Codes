#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum=0;
    cin>>n;
    int temp = n;
    while(n != 0)
    {
        int r = n%10;
        sum = (sum*10)+r;
        n = n/10;
    }
    if(temp == sum)
    {
        cout<<"palindrome"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
    return 0;
}
