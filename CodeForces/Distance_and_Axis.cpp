#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//https://codeforces.com/contest/1401/problem/A

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int  n,k;
        cin>>n>>k;
    
        if(n<k)
            cout<<k-n<<endl;

        //Both below case considers the b=(a-k)/2; so to have b as an integer both conditions applied.   
         
        else if(n%2==k%2 )  
            cout<<0<<endl;
        else 
            cout<<1<<endl;       
    }
    return 0;
}