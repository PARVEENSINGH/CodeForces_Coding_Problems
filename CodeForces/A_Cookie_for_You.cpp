#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll a,b,n,m;
        cin>>a>>b>>n>>m;
        
        if(m<=min(a,b) && m+n<=a+b)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }
}