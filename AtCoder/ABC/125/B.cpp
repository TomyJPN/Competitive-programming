#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int N,V[20],C,ans=0;

	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&V[i]);
	}
	for(int i=0;i<N;i++){
		scanf("%d",&C);
		if(V[i]>C){
			ans+=V[i]-C;
		}
	}
	cout<<ans;
	
	return 0;	

}