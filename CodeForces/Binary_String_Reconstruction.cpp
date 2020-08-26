#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//https://codeforces.com/contest/1400/problem/C

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string str;
        cin>>str;

        int x,n;
        cin>>x;

        n=str.length();

        string res(n,'1');
        
        bool ok=true;
        
        for(int i=0;i<n;i++)
        {
            if(str[i]=='0')
            {
                if(i-x>=0)
                    res[i-x]='0';
                if(i+x<n)   
                    res[i+x]='0'; 
            }
        }

        for(int i=0;i<n;i++)
        {
            if(i-x>=0 && res[i-x]=='1' || i+x<n && res[i+x]=='1')
            {
                if(str[i]!='1')
                {
                     ok=false;
                     break;
                }
            }
            else
            {
                 if(str[i]!='0')
                {
                     ok=false;
                     break;
                }
                
            }
            
        }
            
        if(!ok)
            cout<<-1<<endl;
        else    
             cout<<res<<endl;
    }   
        
    return 0;
}