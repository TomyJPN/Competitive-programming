#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
int main(){
	int n,x;
	int l,ans=1,sum=0;

	scanf("%d %d",&n,&x);

	for(int i=0;i<n;i++){
		scanf("%d",&l);
		sum+=l;
		if(sum<=x){
			ans++;
		}
	}

	cout<<ans;

	return 0;
}