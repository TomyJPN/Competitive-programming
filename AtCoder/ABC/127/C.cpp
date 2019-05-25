#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
int main(){
	int n,m,ans=0;
	int min=100000,max=0;
	int L,R;

	scanf("%d %d",&n,&m);

	for(int i=0;i<m;i++){
		scanf("%d %d",&L,&R);
		if(min<L || i==0)min=L;
		if(max>R || i==0)max=R;
	}

	for(int i=1;i<=n;i++){
		if(i>=min && i<=max){
			ans++;
		}
	}

	printf("%d",ans);
	return 0;
}