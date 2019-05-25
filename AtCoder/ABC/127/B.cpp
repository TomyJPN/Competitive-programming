#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
int main(){
	int r,d,x_2000;

	scanf("%d %d %d",&r,&d,&x_2000);

	for(int i=0;i<10;i++){
		x_2000=r*x_2000-d;
		cout<<x_2000<<endl;
	}

	return 0;
}