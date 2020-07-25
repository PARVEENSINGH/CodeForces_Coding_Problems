#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
    int t;
    cin>>t;
    while(t--)
    {
        int n,j,k,max,mc;
        string temp="";
        cin>>n;

        int A[n+2];
        A[0]=A[n+1]=0;
        cin>>A[1];
        max=A[1];
        for(int i=2;i<=n;i++)
        {
             cin>>A[i];
             if(max<A[i])
             max=A[i];
        }
        mc=max;
        while(max--)
        temp.append("a");
        if(mc)
        cout<<temp<<endl;

        if(!mc)
        {
            bool chf=true;
            while(n>=0)
            {
                if(chf)
                {
                    cout<<"a"<<endl;
                    chf=false;
                }
                else if(!chf)
                {
                   cout<<"b"<<endl;
                    chf=true;
                   
                }
                 n--;
               
            }
        }

        bool ok=true;

        for(int i=1;i<=n;i++)
        {
            j=A[i];
        
                while(j<=mc)
            {
                if(temp[j]=='a')
                temp[j++]='b';
                else
                temp[j++]='a';
            }
           
            cout<<temp<<endl;
        }
       

    }
}