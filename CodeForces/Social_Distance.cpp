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
      int n,k,prev=0,res=0;
      cin>>n>>k;
      string s;
      cin>>s;
      for(int i=0;i<n;i++)
      {
         if(s[i]=='1')
         {
           
             if(i-prev>k+1)
             {
                res+=1;
               
             }

           prev=i;
         }
      }
      cout<<res<<endl;

    }
    return 0;
}