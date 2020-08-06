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
        ll n;
        cin>>n;
        
        ll A[n];

        vector<ll> vl(n+1,0);

        for(int i=0;i<n;i++) 
        {
            cin>>A[i];
            ++vl[A[i]];
        }

        ll s=2,res,ans=0;
        for(s=2;s<=2*n;s++)
        {
            res=0;
               for(int i=1;i<(s+1)/2;i++)
             {
                 if((s-i)>n)
                 continue;
            
                 res+=min(vl[i],vl[s-i]);
                 
             }
             if(s%2==0)
             res+=vl[s/2]/2;
             ans=max(res,ans);
            
        }
 
       cout<<ans<<endl;
    }
        
    return 0;
}