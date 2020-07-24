
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void swap(ll *a,ll *b)
{
    ll p=*a;
    *a=*b;
    *b=p;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y,z;
        cin>>x>>y>>z;
         /*It is confirmed after solving that any two number would always be equal 
         So now the point is to check which numbers can be equal on what condition.
         I found that if (x==y) then z always would be less than x to have possible values
         of a,b, and c*/
         
         //sol_1 Sorting is being performed in virtual Array.
         if(x<y)
         swap(&x,&y);
         if(y<z)
         swap(&y,&z);
         if(z<x)
         swap(&z,&x);
         if(y!=z)
         cout<<"NO"<<endl;
         else
         cout<<"YES\n"<<z<<" "<<x<<" "<<1<<endl;
    }
    return 0;
    
}