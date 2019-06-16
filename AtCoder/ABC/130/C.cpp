#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
int main(){
	int w,h,x,y;
	int is=0;

	scanf("%d %d %d %d",&w,&h,&x,&y);

	if(x+x==w && y+y==h)is=1;
	printf("%lf %d",(double)w*(double)h*0.5,is);


	return 0;
}