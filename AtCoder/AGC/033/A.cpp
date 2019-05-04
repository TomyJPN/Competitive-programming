//赤ちゃん解放（絶対にダメ）

#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

	int h,w;
	string A[1000];

bool checkEnd(){
	cout<<"check\n\n";
	for (int i = 0; i < h; i++){
		for (int j = 0; j < w; j++){
			if(A[i][j]=='.'){
				return false;
			}
		}
	}
	return true;
}

int main(){
	int count=0;

	scanf("%d %d",&h,&w);
	for(int i=0;i<h;i++){
		cin>>A[i];
	}

	while(!checkEnd()){
		count++;
		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				if(A[i][j]!='.' && A[i][j]!=to_string(count)[0]){
					A[i][j]='#';
					if(i!=0 && A[i-1][j]!='#' && A[i-1][j]!=to_string(count-1)[0]) A[i-1][j]=to_string(count)[0];
					if(j!=0 && A[i][j-1]!='#' && A[i][j-1]!=to_string(count-1)[0]) A[i][j-1]=to_string(count)[0];
					if(i!=h && A[i+1][j]!='#' && A[i+1][j]!=to_string(count-1)[0]) A[i+1][j]=to_string(count)[0];
					if(j!=w && A[i][j+1]!='#' && A[i][j+1]!=to_string(count-1)[0]) A[i][j+1]=to_string(count)[0];
				}
			}
		}
		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				cout<<A[i][j];
			}
			cout<<"\n";
		}
	}

	cout<<count;

	return 0;
}