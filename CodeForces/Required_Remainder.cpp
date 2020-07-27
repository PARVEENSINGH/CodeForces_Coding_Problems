#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll x,y,n;
        cin>>x>>y>>n;
        ll a=n-(n%x)+y,b=a-x;
        /* n-(n%x) is done to nullify the existing remainder and then adding y means getting the largest number 
        which results y when mod with x.
        b is calculated for the case when a>n. Hence subtrcting x means we are getting another number just lesser than
        this number which reults y when mod with x.*/

        if(a<=n)
        cout<<a<<endl;
        else
        cout<<b<<endl;
    }
    return 0;
}