#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
    {
            ll m,n,x,y,temp,c=0;
            cin>>n>>m>>x>>y;

            int A[n+1][m+1]={0};

            cout<<x<<" "<<y<<endl;
            A[x][y]=1;

            for( ll i=1;i<=m;i++)
            {
                if(A[x][i]!=1)
                {
                    cout<<x<<" "<<i<<endl;
                    A[x][i]=1;
                }
            }

            bool flag=true;

            for(ll i=m;i>=1;i--)
            {
                if(flag){
                    for(ll j=1;j<=n;j++)
                    {
                        if(A[j][i]!=1)
                        {
                            cout<<j<<" "<<i<<endl;
                            A[j][i]=1;
                        }
                    }
                    flag=false;
                }

                else
                {
                    for( ll j=n;j>=1;j--)
                    {
                        if(A[j][i]!=1)
                        {
                            cout<<j<<" "<<i<<endl;
                            A[j][i]=1;
                        }
                    }
                    flag=true;
                } 
            }

        
	return 0;
}