#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;


/* It is the approach failing on test case 5;
Reason for failure is not storing the number<=x on even indexes also as doing on odd indexes.
for(int i=1;i<=n;i++)
    {
    cin>>A[i];
    B[i]=A[i];
    }
    sort(B+1,B+n);
    for(int i=1;i<=n;i++)
    cout<<B[i]<<" ";
    int l,mid,h=n,low=0;
    while(low<=h)
    {
         mid=(h-low)/2+low;
         vector<ll> temp;
           temp.push_back(0);
            temp.push_back(A[1]);
            l=1;
    for(int i=2;i<=n;i++)
    {
        if(l%2!=0)
        {
        temp.push_back(A[i]);
        l+=1;
        }

       else if(l%2==0 && A[i]<=B[mid])
       {
        temp.push_back(A[i]);
        l+=1;
       }
        if(l==k)
        break;
    }

    if(l<k)
    low=mid+1;
    else if(l>k)
    h=mid;
    else if(l==k)
    {
    cout<<B[mid-1]<<endl;
    break;
    }
*/
bool GenerateSub(int x,int index,ll A[],int n,int k)
{
    int len=0;
    for(int i=1;i<=n;i++)
    {
      // A combination of if else is being used as a critical section
      //A index^=1 is used to make the value of index interchangale as 0 or 1.

        if(!index)
          {
            len++;
            index^=1; 
          }
        else
        {
          //Being used to store no. only lesser than x at odd or even index.
          if(A[i]<=x)
          {
          len++;
          index^=1;
          }
        }
    } 

    return len>=k;
}
ll binarySearch(ll l,ll h,ll A[],int n,int k)
{
  while(l<h)
  {
    ll mid=(h-l)/2+l;

    if(GenerateSub(mid,0,A,n,k) || GenerateSub(mid,1,A,n,k))  // 0 and 1 used to store number<=x on idexes even & odd
                                                              //If anyone returns true then we got the answer.
      h=mid;
     else
      l=mid+1;
      
  }
  return l;
}
int main() {
	
	    int n,k;
      cin>>n>>k;
    
    ll A[n+1];
    for(int i=1;i<=n;i++)
    cin>>A[i];

    cout<<binarySearch(1,1e9,A,n,k)<<endl;  

	return 0;
}