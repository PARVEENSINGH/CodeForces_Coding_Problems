#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
    {
            ll m,n,x,y,temp,c=0;
            cin>>n>>m>>x>>y;

            int A[n+1][m+1];
            ll j=1,i=1;
            cout<<x<<" "<<y<<endl;
            A[x][y]=1;

            for( i=1;i<=m;i++)
            {
                if(A[x][i]!=1)
                {
                    cout<<x<<" "<<i<<endl;
                    A[x][i]=1;
                }
            }
            
            while(i==m)
                {
                    for( j=1;j<=n;j++)
                    {
                         if(A[j][i]!=1)
                {
                    cout<<x<<" "<<i<<endl;
                    A[x][i]=1;
                }
                    }

                    m-=1;
                }
            }
    
	return 0;
}