#include<cstdio>
using namespace std;
int main(){
	int n,m,x,y;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	for(int i=0;i<n;++i){
		if(i%2==0)for(int j=0;j<m;++j){
			printf("%d %d\n",(x+i-1)%n+1,(y+j-1)%m+1);
		}else for(int j=m-1;j>=0;--j){
			printf("%d %d\n",(x+i-1)%n+1,(y+j-1)%m+1);
		}
	}
}