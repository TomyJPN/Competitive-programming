#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

char change(char s){
	if(s=='A')return 'a';
	if(s=='B')return 'b';
	if(s=='C')return 'c';
}

int main(){
	string str;
	int a,k;
	scanf("%d %d",&a,&k);
	cin>>str;

	str[k-1]=change(str[k-1]);

	cout<<str;

	return 0;
}