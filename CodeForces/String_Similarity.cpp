#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//https://codeforces.com/contest/1400/problem/A

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
      int n;
      cin>>n;

      string str;
      cin>>str;

      if(n==1)
        {
            cout<<str<<endl;
            continue;
        }

       if(str=="101")
       {
           cout<<"00"<<endl;
           continue;
       } 

       string res="";
       for(int i=2;i<str.length();i+=2)
            res+=str[i-2];
       res+=str[str.length()-1];    
        cout<<res<<endl;    
    }
    return 0;
}