#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int res;
void flip(int e,string &a,string &temp)
{
    for(int i=0;i<=e;i++)
    {
        if(a[i]=='0')
        temp.append("1");
        else
        temp.append("0");   
    }
   temp= string(temp.rbegin(),temp.rend());  
}
void RevertFlip(string &temp)
{
    int n=temp.length();
    for(int i=0;i<n;i++)
    {
        if(temp[i]=='0')
        temp[i]='1';
        else
        temp[i]='0';
    }
    temp=string(temp.rbegin(),temp.rend());  
}
void copyTemp(int e,string &temp,string &a,string b)
{
    for(int i=0;i<=e;i++)
         a[i]=temp[i];

}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   int n;
       res=0;
	   cin>>n;
        /*Concept converting each bit as required in answer. steps are following:-
            1.flip prefix of length i.
            2.flip 1st bit of prefix.
            3.flip prefix of length i again to revert the change . Such that the changes can be applied to single bit only.*/
       string a,b,temp="";
       cin>>a>>b;

        vector<int> ans;
       for(int i=0;i<n;i++)
       {
           temp="";
           if(a[i]!=b[i])
           {
               res+=3;
               flip(i,a,temp);
                ans.push_back(i+1);
                if(temp[0]=='0')
                    temp[0]='1';
                else
                    temp[0]='0';
                    ans.push_back(1);
                   // cout<<temp<<endl;
                RevertFlip(temp); 
                ans.push_back(i+1);
                copyTemp(i,temp,a,b);   
           }
       }

        cout<<res<<" ";
       for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
       cout<<endl;
	}
	return 0;
}