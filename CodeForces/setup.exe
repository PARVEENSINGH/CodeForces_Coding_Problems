#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   ll n,res=0;
	   cin>>n;
	   bool ok=true;
	    if(n==1)
	    {
	        cout<<0<<endl;
	        continue;
	    }
        if(n%3!=0)
        {
        cout<<-1<<endl;
        continue;
        }
        
        while(n>1)
        {
            
            if(n%3!=0)
            {
               ok=false;
               cout<<-1<<endl;
                break;
            }
            if(n%6==0)
            {
                res++;
                n/=6;
                continue;
            }
            else
            {
                res++;
                n*=2;
            }
            
        }
        if(ok)
        cout<<res<<endl;
	}
	return 0;
}