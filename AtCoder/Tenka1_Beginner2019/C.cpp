//WA

#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int n,count1=0,count2=0;
	char s[200000];
	char tmp[200000];

	cin>>n;
	cin>>s;

	memcpy(tmp, s, sizeof(s));

	for(int i=0;i<n-1;i++){
		//cout<<s[i];
		if(s[i]=='#' && s[i+1]=='.'){
			//cout<<"change";
			s[i+1]='#';
			count1++;
		}
	}
	//cout<<endl;

	for(int i=n-1;i>=0;i--){
		//cout<<tmp[i];
		if(tmp[i]=='.' && tmp[i-1]=='#'){
			//cout<<"change";
			tmp[i]='.';
			count2++;
		}
	}

	//cout<<count1<<","<<count2;

	if(count1<count2)cout<<count1;
	else cout<<count2;
}