#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <vector>
using namespace std;

typedef struct st{
	int i;
	string s;
	int p;
}data_t;

void print(vector<data_t> data,int n){
	for (int i = 0; i < n; i++) {
		cout<<data[i].i;
		printf(" ");
		cout<<data[i].s;
		printf(" ");
		cout<<data[i].p;
		printf("\n");
	}
	return;
}

int main(){
	int n;
	
	vector<data_t> data;

	scanf("%d",&n);

	int pi;
	string si;
	for(int i=0;i<n;i++){
		cin>>si;
		cin>>pi;
		st in;
		in.i=i;
		in.s=si;
		in.p=pi;
		data.push_back(in);
	}


	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>i;j--){
			if(data[j-1].p<data[j].p){
				data_t tmp;
				tmp=data[j-1];
				data[j-1]=data[j];
				data[j]=tmp;
			}
		}
	}

	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>i;j--){
			if(data[j-1].s>data[j].s){
				data_t tmp;
				tmp=data[j-1];
				data[j-1]=data[j];
				data[j]=tmp;
			}
		}
	}

	for(int i=0;i<n;i++)cout<<(data[i].i+1)<<endl;
	//print(data,n);
	
	return 0;
}

