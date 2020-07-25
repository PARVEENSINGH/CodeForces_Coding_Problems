#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,res=0,i;
        cin>>n;
        int A[n];

       
        for(i=0;i<n;i++)
        cin>>A[i];
    
         i=n-1;
        while(i>0 && A[i-1]>=A[i])
        i-=1;
        while(i>0 && A[i-1]<=A[i])
        i-=1;
        cout<<i<<endl;
        
    }
    return 0;
}