#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const string s="abacaba";

int countOccurances(string &res,int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(res.substr(i,7)==s)
        count++;
    }
    
    return count;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   int n,flag=0;
	   cin>>n;
	   
	   bool a=false;
	   
	   string str,res;
	   cin>>str;
	   
	   for(int i=0;i<=n-s.length();i++)
	   {
	       res=str;
	       flag=0;
	       for(int k=0;k<7;k++)
	       {
	           if(res[i+k]!='?' && res[i+k]!=s[k])
	           {
	               flag=1;
	               break;
	           }
	           res[i+k]=s[k]; //assigning expected values in place of '?'
	       }
	       if(!flag && countOccurances(res,n)==1)
	       {
	           for(int j=0;j<n;j++) // replacing  all extra '?' with different char
	           if(res[j]=='?')
	           res[j]='z';
	           
	           a=true;
	           cout<<"YES\n"<<res<<endl;
	           break;
	           
	       }
	       
	   }
	   if(!a)
	   cout<<"NO"<<endl;
	   
	}
	return 0;
}
