#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

/* This functionn implemented correctly but giving error.
Basically 2nd player would win when n=1,n=pow(2,x) (ex:-16) provided x>1, n=2*p where p is prime  p>=3 (ex:- 6)
bool checkOddDivisor(ll n)
{
    if(n==2)
    return false;

    for(int i=3;i<=n/2;)
    {
        if(i%2==0)
           i-=1;
       
        if(n%i==0 && n/i==2)
        return true;
        else if(n%i==0)
        return false;
       
        i+=2;
    }
    return true;    
} */
bool Inpowerof2(ll n)
{
    int i=2;
    while(i<n)
    {
        if(n==pow(2, i))
        return true;
        else if(n<pow(2, i))
        break;
        i+=1;
    }
    return false;
}
bool IfPrimeisMultiple(ll n)
{
    if(n<3)
    return false;

    int i=2;
    while(i*i<=n)
    {
    if(n%i==0)
    return false;
    i+=1;
    }

    return true;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	  ll n;
      cin>>n;

      if(n==1 || Inpowerof2(n) || (n%2==0 && IfPrimeisMultiple(n/2)))
      cout<<"FastestFinger"<<endl;
      else
       cout<<"Ashishgup"<<endl;
        
	}
	return 0;
}