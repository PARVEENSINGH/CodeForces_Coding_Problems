#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void swap(int *a,int *b)
{
    int p=*a;
    *a=*b;
    *b=p;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int  n,j,res=0;
        cin>>n;
        int  A[n];
        vector<int> Even,Odd;
       
        for(int i=0;i<n;i++)
        {
        cin>>A[i];
        if(A[i]%2 && i%2==0)
        Even.push_back(A[i]);
        else if(A[i]%2==0 && i%2)
        Odd.push_back(A[i]);
        }   

        if(Even.size()!=Odd.size())
        cout<<-1<<endl;
        else
        cout<<Even.size()<<endl;
    }
    return 0;
}