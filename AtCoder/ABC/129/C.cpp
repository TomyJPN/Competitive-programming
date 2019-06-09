//解けていません

#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <vector>

#define USE_OPTIONAL 0

#if USE_OPTIONAL
#  include <experimental/optional>
#endif

//コピペ・・・
struct fibonacci{
    using value_type = std::size_t;

#if USE_OPTIONAL
    std::vector<std::experimental::optional<value_type>> memo = { 0, 1 };
#else
    // optional を使わない場合はこっち
    std::vector<value_type> memo = { 0, 1 };
#endif

    value_type
    operator ()(value_type value){
#if USE_OPTIONAL
        if( memo.size() > value && (memo[value]) ){
            return memo[value].value();
        }
        memo.resize(value + 1);
#else
        // optional を使わない場合はこっち
        if( memo.size() > value && (memo[value] || value == 0) ){
            return memo[value];
        }
        memo.resize(value + 1, 0);
#endif

        value_type result = (*this)(value - 2) + (*this)(value - 1);

        memo[value] = result;
        return result;
    }
};


int
main(){
    fibonacci fib;
	int n,m,a[100000];
	size_t sum=1;

	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]);
	}

	a[m]=n;
	for(int i=0;i<m+1;i++){
		if(i!=0 && a[i-1]+1==a[i]){
			printf("0");
			return 0;
		}

		if(i==0){
			printf("%d~%d:%d\n",0,a[i]-1,a[i]-1);
			size_t tmp=fib(a[i]);
			if(a!=0)sum*=tmp;
			
		}
		else{
			printf("%d~%d:%d\n",a[i-1],a[i],a[i]-a[i-1]-1);
			size_t tmp=fib(a[i]-a[i-1]);
			if(a!=0)sum*=tmp;
		}
		printf("sum:%zd\n",sum);
	}

	printf("%zd",sum%1000000007);
    

    return 0;
}