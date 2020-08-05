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
        ll n;
        cin>>n;
        
        ll A[n];
       
    
        for(int i=0;i<n;i++) 
            cin>>A[i];
 
        sort(A,A+n);
        int temp=0,res=0;
        bool flag=true;

        for(int i=1;i<n;i++)
        {
            if(A[i]==A[i-1])
            temp+=1;
            else if(A[i]!=A[i-1] && res==0)
            {
                res=temp;
                temp=0;
            }
        }    

        if(temp)
        {
            cout<<(res+1)/2<<endl;
            continue;
        }
        for(int i=1;i<n;i++)
        {
            if(A[i-1]+1!=A[i])
            flag=false;
        }
        if(!flag)
         cout<<1<<endl;
        else
        cout<<(n/2)<<endl;
        
        // ll sum=0,ans=1,temp=1;
        // for(int i=0;i<n-1;)
        // {
        //     if(sum==A[i]+A[i+1])
        //     {
        //         ans++;
        //         i+=2;
        //     }
        //     else
        //     {
        //         sum=A[i]+A[i+1];
        //         i++;
        //     }
            
        // }

        // int i=0,r=n-1;
        // sum=0;
        // while(i<r)
        // {
        //     if(sum==A[i]+A[r])
        //     {
        //         temp++;
        //         i++;
        //         r--;
        //     }
        //     else
        //     {
        //         sum=A[i]+A[r];
        //         i++;
        //         r--;
        //     }
            
        // }

        // if(temp>ans)
        // cout<<temp<<endl;
        // else
        // cout<<ans<<endl;
        
    }
        
    return 0;
}