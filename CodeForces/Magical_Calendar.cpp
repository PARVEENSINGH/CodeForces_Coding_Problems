#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long  ll;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n,r,res=0;
        cin>>n>>r;
        
        if(r<n)
            res=(r)*(r+1)/2;
        else if(r>=n)
            res=((n-1)*n/2)+1;
        cout<<res<<endl;
        
    }
    return 0;
}