#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n;
        vector<ll> A(n+1,0);
    
        ll a;

        cin>>a;
        A[1]=a;

        bool ok=true;
    
        for(int i=2;i<=n;i++)
        {
            cin>>a;
            A[i]=a;

            if(A[i-1]!=A[i])
                ok=false;
        }

        if(ok)
            cout<<n<<endl;

        else
            cout<<1<<endl;
    }
    return 0;
}