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
        bool forp=true;
        bool forf=true;
        int capp=0;
        int capf=0;
       for(int i=1;i<=s;i++)
       {
           for(int j=1;j<=a;j++)
           {
               if(ws*i+wa*j<=p)
                    capp=max(capp,i+j);
               if(ws*i+wa*j<=f)    
                    capf=max(capf,i+j);
               if(ws>p || wa>p)
               {
                   if(ws>p) 
                        capp=(wa<=p)?p/wa:0;
                   if(ws>f)    
                        capf=(wa<=f)?f/wa:0;
                 
               }    
               if(wa>p || wa>f)
               {
                   if(wa>p)
                        capp=(ws<=p)?p/ws:0;
                   if(wa>f)
                        capf=(ws<=f)?f/ws:0;     
               } 
           }
       }
       if(capp+capf<=s+a)
            cout<<capp+capf<<endl;
       else
            cout<<max(capp,capf)<<endl; 
        
    }
    return 0;

}