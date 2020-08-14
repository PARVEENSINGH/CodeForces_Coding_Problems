#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//https://codeforces.com/contest/1398/problem/A

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n,temp1,temp2;
        cin>>n;
        
        ll A[n+1];
    
        for(int i=1;i<=n;i++) 
           cin>>A[i];

        bool ok=false;
    

        ll sum=A[1]+A[2];
        for(ll i=3;i<=n;i++)
        {
            if(sum<=A[i])
            {
                ok=true;
                cout<<1<<" "<<2<<" "<<i<<endl;
                break;
            }
        }

        if(!ok)
            cout<<-1<<endl;   

    }
        
    return 0;
}