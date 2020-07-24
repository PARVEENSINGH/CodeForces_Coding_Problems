#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n,p,count=0,g;
	    cin>>m>>n;
	    int A[m],B[n];
	    for(int i=0;i<m;i++)
	    {
	        cin>>A[i];
	    }
	        for(int i=0;i<n;i++)
	    {
	        cin>>B[i];
	    }
	   
	    for(int i=0;i<m;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(A[i]==B[j])
	            {
	                count++;
	                g=i;
	                break;
	            }
	        }
	    }
	    if(count>=1)
	    cout<<"YES\n"<<1<<" "<<A[g]<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}