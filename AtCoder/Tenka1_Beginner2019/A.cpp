#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int a,b,c;

	scanf("%d %d %d",&a,&b,&c);

	if((a<c && c<b)||(b<c && c<a)){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
}