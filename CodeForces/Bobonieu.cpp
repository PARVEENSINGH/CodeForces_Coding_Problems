#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
#define MAX 255


int main() {
	int t;
	cin>>t;
 
	while(t--)
	{
        ll r,g,b,w;
        cin>>r>>g>>b>>w;

        int a=r%2+g%2+b%2+w%2;

        if((a==0) || (a==1))
        cout<<"YES"<<endl;
        else if((r==0) || (g==0) || (b==0))
        cout<<"NO"<<endl;
        else if((a==3) || (a==4))
         cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }

}
