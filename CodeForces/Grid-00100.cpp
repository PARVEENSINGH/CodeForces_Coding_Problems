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
        int  n,k;
        cin>>n>>k;
        
        int A[n][n]={0};

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                A[i][j]=0;
            }
        }

    /* We have to move diagonally in the grid 
    1. First we will cover the original center diagonal 
    2. After that we will move diagonally one step to the right of the centre diagonal & after that 
    lower most left diagonal & so on.
     ex:- [{1,2,3,4},
            {5,6,7,8},
             {7,8,9,10}
                {11,12,13,14}] 
                 So, 1st we will cover {1,6,9,14}->step 1.
                    then 2nd we will cover{2,7,10}->step 2.
                    then 3rd we will cover {11}->step 3
                    then we will cover {3,8}->step 4
                    then we will cover {7,12}->step 5
                    then we will cover {4}->step 6
                    then we will cover {5,8,13}->step 7.
    */
        if(k%n==0)
        cout<<"0\n";
        else
        cout<<"2\n";

        int i=0,j=0;
        while(k--)
        {
           A[i][j]=1;
           i++;j++; j%=n;
           if(i==n)
           {
               i=0; j++;
               j%=n;
           }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
             cout<<A[i][j];
             cout<<endl;
        }
       
        
    }
    return 0;
}