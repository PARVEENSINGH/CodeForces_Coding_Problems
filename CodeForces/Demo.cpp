#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    //string s= bitset<32> bs(589).to_string();
     string s = bitset<64> (589).to_string(); 
    // for(int i=0;i<32;i++)
    // {
    //     if(bs[i])
    //     t=i;
    // }
    const auto loc=s.find('1');
   //if(loc != string::npos) 
    cout<<s.substr(loc)<<endl;
    cout<<"checking for file creation";
    return 0;
}