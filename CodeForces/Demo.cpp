#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define ll long long

//void _initMap(map<string,vector<int>> &map)
// {
//     map["january"]={1,31};
//     map["february"]={2,29};
//     map["march"]={3,31};
//     map["april"]={4,30};
//     map["may"]={5,31};
//     map["june"]={6,30};
//     map["july"]={7,31};
//     map["august"]={8,31};
//     map["september"]={9,30};
//     map["october"]={10,31};
//     map["november"]={11,30};
//     map["december"]={12,31};  
// }
const int mxn = 1000005;
vector<bool> p(mxn+1, true);

void sieve(int n)
{
	p[0] = false;
	p[1] = false;
	for(int i = 2; i * i <= n; i++)
	{
		if(p[i]) {
			for(int j = i * i; j <= n; j += i)
				p[j] = false;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	sieve(mxn);
	vector<int> dp(mxn, 0);
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 2;
	dp[4] = 3;
	for(int i = 5; i < mxn; i++)
		dp[i] = dp[i-1] + 2 - (p[i] == false);
	
	int t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin >> n;
		
		cout << dp[n] << "\n";
	}
}