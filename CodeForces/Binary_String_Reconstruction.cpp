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
        string res="";
        bool ok=true;
        for(int i=0;i<n;i++)
        {
            if(((i-x)>=0 && (i-x)<n && str[i-x]=='1') || ((i+x)<n && (i+x)>=0 && str[i+x]=='1') )
                res+='1';
            else if(!((i-x)>=0 && (i-x)<n && str[i-x]=='1') && !((i+x)<n && (i+x)>=0 && str[i+x]=='1'))
                res+='0';
            else
            {
                ok=false;
                break;
            }
                
        }
        if(!ok)
            cout<<-1<<endl;
        else    
             cout<<res<<endl;
    }   
        
    return 0;
}