#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
int main(){
	int n,l;
	int sum=0,eat=10000,eat_;

	scanf("%d %d",&n,&l);

	for(int i=1;i<=n;i++){
		sum+=l+i-1;
		//cout<<l+i-1<<endl;
		if(eat>abs(l+i-1)){
			eat=abs(l+i-1);
			eat_=l+i-1;
		}
	}	
	sum-=eat_;

	//cout<<"eat"<<eat_;
	//cout<<"ans"<<sum;

	cout<<sum;
	return 0;
}