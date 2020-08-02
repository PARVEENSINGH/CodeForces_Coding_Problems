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
        int  n,a;
        cin>>n;
        int  A[2*n+1];
        vector<int> Even,Odd;
       
        for(int i=1;i<=2*n;i++)
        {
            cin>>A[i];
            
          if((A[i]%2)==0)
             Even.push_back(i);
           else
             Odd.push_back(i);
        }

        int even=Even.size();
        int odd=Odd.size();

        int i=0,count=0;
        while(i<even-1 && count<n-1)     
        {
            cout<<Even[i]<<" "<<Even[i+1]<<endl;
            i+=2;
            count++;
        }

        int j=0;
        while(j<odd-1 && count<n-1)
        {
            cout<<Odd[j]<<" "<<Odd[j+1]<<endl;
            j+=2;
            count++;
        }
    }
    return 0;
}