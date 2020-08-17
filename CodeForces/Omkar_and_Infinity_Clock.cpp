#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void printRes(vector<ll>A,int n){
    for(int i=0;i<n;i++)
            cout<<A[i]<<" ";
            
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        unsigned long long k;
        cin>>k;

        vector<ll> A(n,0);
        ll min=INT64_MIN,a;

        for(int i=0;i<n;i++)
        {
            cin>>a;
            A[i]=a;
            min=max(min,A[i]);
        }

        if(k%2==0 && k>0)
        {
            int p=2;
            while(p--)
            { 
                for(int i=0;i<n;i++)
                    A[i]=min-A[i];
                  min=*max_element(A.begin(),A.end());    
            }
             printRes(A,n);
             continue;
        }   
            
         else if(k%2==1)
         {
               for(int i=0;i<n;i++)
                    A[i]=min-A[i];

                  printRes(A,n);   
                  continue;
         } 
          printRes(A,n);   
         
    }
    return 0;
}