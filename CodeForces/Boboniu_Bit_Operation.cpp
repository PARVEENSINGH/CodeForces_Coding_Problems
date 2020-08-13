#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
    {
            int n,m;
            cin>>n>>m;
            ll Aa[n],B[m];

            int max_val=pow(2, 9);

            for(int i=0;i<n;i++)
            cin>>Aa[i];

            for(int j=0;j<m;j++)
            cin>>B[j];

            int count=0;
            for(int k=0;k<max_val;k++)
            {
                count=0;
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<m;j++)
                    {
                        if(((Aa[i] & B[j])|k)==k)
                        {
                            count++;
                            break;
                        }
                    }
                }

                if(count==n)
                {
                    cout<<k<<endl;
                    break;
                }
            } 

	return 0;
}