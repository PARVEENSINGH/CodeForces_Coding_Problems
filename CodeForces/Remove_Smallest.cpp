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

        ll A[n+1];
       
        for(int i=1;i<=n;i++)    
            cin>>A[i];

          sort(A+1,A+n+1);
        // for(int i=1;i<=n;i++)
        // cout<<A[i]<<" ";
        bool flag=true;
          for(int i=2;i<=n;i++)  
          {
              if(abs(A[i]-A[i-1])>1)
              {
                  flag=false;
                  break;
              }
          }
        
        if(!flag)
        cout<<"NO"<<endl;
        else
         cout<<"YES"<<endl;
        

        }
    return 0;
}