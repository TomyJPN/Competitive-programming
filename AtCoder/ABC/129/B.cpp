#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
int main(){
	int n;
	int rN,lN,rSum=0,lSum=0;
	int A[100];

	int t,ans=1000000000;

	scanf("%d",&n);

	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}


	for(int i=0;i<n-1;i++){
		t=i;
		lSum=rSum=0;
		//printf("t=%d\n",t);
		for(int j=0;j<n;j++){
			if(j<=t){
				//printf("L[%d,%d]\n",lSum,rSum);
				lSum+=A[j];
			}else{
				//printf("R[%d,%d]\n",lSum,rSum);
				rSum+=A[j];
			}
		}
		//printf("end[%d,%d]\n",lSum,rSum);
		if(ans>abs(lSum-rSum))ans=abs(lSum-rSum);
	}
	printf("%d",ans);
	return 0;
}