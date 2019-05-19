#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
int main(){
	int n,k;
	long double ans=0;

	scanf("%d %d",&n,&k);

	for(int i=1;i<=n;i++){
		int coinN=0;
		int point=i;
		//printf("saikoro:%d\n",i);
		while(point<k){
			coinN++;
			point*=2;
			//printf("point:%d\n",point);
		}
		//printf("%lf",(1.0/(long double)n)*pow(1.0/2.0,(long double)coinN));
		//cout<<endl;
		ans+=(long double)((long double)1.0/(long double)n)*pow((long double)(1.0/2.0),(long double)coinN);
	}
	printf("%.9Lf",ans);

	return 0;
}