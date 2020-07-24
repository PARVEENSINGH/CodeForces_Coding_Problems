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
        int n,a,flag=0;
        cin>>n;
        
        vector<int> vec;
        vec.push_back(0);
        for(int i=0;i<2*n;i++)
        {
            cin>>a;
        
        for(int j=0;j<vec.size();j++)
        {
            if(vec[j]==a)
            {
                flag=1;
                break;
            }
        }
        
        if(!flag)
        vec.push_back(a);
        flag=0;
        
        }
        
        for(int i=0;i<vec.size();i++)
        {
            if(vec[i]>0)
        cout<<vec[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;

}