#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   int n,s,temp,a=1;
	   cin>>n;
	   s=n;
        int num=1;
        while(n--)
        {
            num*=10;
        }
        num-=2;
        temp=s/4;
        if(!temp)
        {
        cout<<num<<endl;
        continue;
        }

       while (temp--)
       {
            a*=10;
            num-=a;
       }
       
        
        cout<<num<<endl;
	}
	return 0;
}
