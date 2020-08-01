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
        ll n,res=0,i;
        cin>>n;
        
        if(n%2==0)
        {
            cout<<(n/2)<<endl;
        }
        else
        {
            cout<<(n/2)+1<<endl;
        }
 
        
    }
    return 0;
}