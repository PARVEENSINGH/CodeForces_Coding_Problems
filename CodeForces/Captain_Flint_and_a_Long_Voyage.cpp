#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   int n,s,temp;
	   cin>>n;
	   s=n;
       n-=s/4;
        while(n>1)
        {
            cout<<"9";
            n--;
        }
        temp=(s/4)+1;
        if(s%4==0)
        {
        cout<<"9";    
        temp-=1;
        }
        while(temp--)
        {
           cout<<"8";
        }    
        cout<<endl;
	}
	return 0;
}
