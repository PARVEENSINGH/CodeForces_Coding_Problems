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
        ll n,a;
        cin>>n;

        ll A[n+1];
        for(int i=1;i<=n;i++)
        {
             cin>>a;
             if(i%2)
            {
                if(a>=0)
                A[i]=a;
                else
                A[i]=-1*a;
            }
            else
            {
               if(a>=0)
               A[i]=-1*a;
               else
               A[i]=a;
               
            }
            
        }

        for(int i=1;i<=n;i++)
        cout<<A[i]<<" ";
        cout<<endl;
    }
    return 0;
}