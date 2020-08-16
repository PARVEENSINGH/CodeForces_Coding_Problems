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
        m=n;

        for(int i=1;i<=n;i++)
        {
            cin>>a;
            A[i]=a;
        }

       // sort(A.begin(),A.end());
        bool flag=true;
        int i=2;

    
       while(1)
       {
            flag=true;
            for(int j=2;j<=n;j++)
            {
                if(A[j]!=A[j-1])
                {
                    A.insert(A.begin()+j-1,A[j]+A[j-1]);
                    A.erase(A.begin()+j);
                    n--;
                }
            }

            while(i<=n)
            {
                if(n==1)
                    break;

                if(A[i]!=A[i-1])
                {
                    //cout<<"djfdnkf"<<endl;
                    flag=false;
                    break;
                }
                i++;
            }
            
            if(flag)
                break;
        }    

        //  for(int i=1;i<=n;i++)
        //     cout<<A[i]<<" ";
        //     cout<<endl;
        
        cout<<n<<endl;
    }
    return 0;
}