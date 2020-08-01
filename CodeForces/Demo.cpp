#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a = ceil((n*1.0)/4);
		n=n-a;
		while(n--) cout<<9;
		while(a--) cout<<8;
		cout<<endl;
	}
}