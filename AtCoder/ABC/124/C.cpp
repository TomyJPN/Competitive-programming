#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

string s;

void inv(int n){
	if(s[n]=='0')s[n]='1';
	else s[n]='0';
}

int main(){
	int ans1=0,ans2=0;
	string tmp;
	cin>>s;
	tmp=s;

	for(int i=0;i<s.size();i++){

		if(s[i]==s[i+1]){
			inv(i+1);
			ans1++;
		}
	}
	
	s=tmp;
	inv(0);
	ans2++;
	for(int i=0;i<s.size();i++){

		if(s[i]==s[i+1]){
			inv(i+1);
			ans2++;
		}
	}

	if(ans1>ans2)cout<<ans2<<endl;
	else cout<<ans1<<endl;
}