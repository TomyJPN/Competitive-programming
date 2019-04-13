#include <cstdio>


int main(){
	int a,b,ans;

	ans=0;
	scanf("%d %d",&a,&b);
	if(a>b){
		ans+=a;
		a--;
	}else{
		ans+=b;
		b--;
	}

	if(a>b){
		ans+=a;
		a--;
	}else{
		ans+=b;
		b--;
	}

	printf("%d\n",ans);

	return 0;
}
