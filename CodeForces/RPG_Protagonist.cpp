#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//https://codeforces.com/contest/1400/problem/B

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        ll p,f,s,a,ws,wa;
        cin>>p>>f>>s>>a>>ws>>wa;
        
        int ans=0;
        if(ws<wa)
        {
            if(p%ws==0)
                ans+=ws;
            else
            {
                ans+=(p/ws);
            
        }
        
    }
    return 0;

}