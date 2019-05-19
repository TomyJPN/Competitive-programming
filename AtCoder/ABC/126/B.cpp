#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


int main(){
	string str,s1_s,s2_s;
	int s1,s2;

	cin>>str;

	s1_s=str[0];
	s1_s+=str[1];
	s2_s=str[2];
	s2_s+=str[3];

	s1=stoi(s1_s);
	s2=stoi(s2_s);

	//YYMM
	if(s1>=0 && s2>0 && s2<=12){
		if(s2>=0 && s1>0 && s1<=12){
			cout<<"AMBIGUOUS";
		}
		else{
			cout<<"YYMM";
		}
	}
	//MMYY
	else if(s2>=0 && s1>0 && s1<=12){
		cout<<"MMYY";
	}
	else{
		cout<<"NA";
	}


	return 0;
}