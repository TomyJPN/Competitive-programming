#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
int main(){
	int p,q,r;

	scanf("%d %d %d",&p,&q,&r);

	if(p>=q && p>=r)printf("%d",q+r);
	else if(q>=p && q>=r)printf("%d",p+r);
	else if(r>=p && r>=q)printf("%d",p+q);

	return 0;
}