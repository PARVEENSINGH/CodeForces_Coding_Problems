#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const string s="abacaba";

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   int n;
	   cin>>n;
	   
	   if(n<31)
       cout<<"NO"<<endl;
       else
       {
           cout<<"YES"<<endl;
           int a=n-30;
           if(a==6 || a==10 || a==14)
           cout<<"6 "<<"10 "<<"15 "<<(n-31)<<endl;
            else
           cout<<"6 "<<"10 "<<"14 "<<a<<endl;
       }
       
	   
	}
	return 0;
}
