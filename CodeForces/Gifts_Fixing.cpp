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
        ll min=INT64_MAX;

        ll C[n+1],O[n+1];
       
        for(int i=1;i<=n;i++)  
        {  
            cin>>C[i];
            if(min>C[i])
            min=C[i];
        }

        ll minc=min;
        min=INT64_MAX;

        for(int i=1;i<=n;i++)    
        {
            cin>>O[i];
            if(min>O[i])
            min=O[i];
        }

        ll mino=min;
        ll res=0,temp=0;
        for(int i=1;i<=n;i++)
        {
            if(C[i]==minc && O[i]==mino)
            continue;
            else if(C[i]!=minc && O[i]!=mino)
            {
                if((O[i]-mino)>=(C[i]-minc))
                 {
                    res+=C[i]-minc;
                    res+=(O[i]-mino)-(C[i]-minc);
                 }                              
                else
                {
                     res+=O[i]-mino;
                    res+=(C[i]-minc)-(O[i]-mino);
                }
                
                O[i]=mino;
                C[i]=minc;
            }
            else if(C[i]==minc)
            {
                res+=O[i]-mino;
                O[i]=mino;
            }
            else if(O[i]==mino)
            {
                res+=C[i]-minc;
                C[i]=minc;
            }
        }

        cout<<res<<endl;
         
        }
    return 0;
}