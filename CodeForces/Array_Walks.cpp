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
        ll n,k,z;
        cin>>n>>k>>z;
        
        ll A[n+1];
        ll max_sum=0;
      
        for(int i=1;i<=n;i++) 
           cin>>A[i];


        ll r=k-2*z+1,index,sum=0,ans=0;
        for(int j=0;j<=z;j++)
        {
        for(int i=1;i<=(k-2*j+1);i++)
        {
            if(max_sum<(A[i]+A[i+1]) && i<n-1)
            {
            max_sum=A[i]+A[i+1];
            index=i;
            }
            sum+=A[i];
           // cout<<sum<<" "<<max_sum<<endl;
        }   

        ans=max(ans,sum+max_sum*j);
        }
      
       
 
       cout<<ans<<endl;
    }
        
    return 0;
}