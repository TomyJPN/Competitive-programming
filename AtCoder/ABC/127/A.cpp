#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
int main(){
	int a,b;

	scanf("%d %d",&a,&b);
	if(a>=13)cout<<b;
	else if(a>=6)cout<<b/2;
	else cout<<"0";

	return 0;
}