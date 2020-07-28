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
       string b,res="",temp;
       cin>>b;

       int n=b.length();
       for(int i=0;i<n-1;i+=2)
       {
           temp=b[i];
           res.append(temp);
       }
       temp=b[n-1];
       res.append(temp);
       cout<<res<<endl;

    }
    return 0;
}