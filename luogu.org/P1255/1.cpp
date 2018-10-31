#include <iostream>
#include <stdio.h>
using namespace std;
const int  max1 = 5007;
int n;
long long f[max1];

int main(){
	int i, j;
	scanf("%d", &n);
	f[0] = 0 , f[1] = 1, f[2] = 2;
	for( i=3; i<=n; ++i){
		for( j=1; j<=(n>>1); ++j){
			if( f[i]>f[j]+f[i-j]||!f[i] ) f[i] = f[j]+f[i-j];
		}
	}
	printf("%lld", f[n]);
	return 0;
}
/*
stairs 走楼梯，数楼梯 
f[0] = 0
f[1] = 1
f[2] = 2
f[3] = 1+2 = 3
f[3] = f[1]+f[2]
取最小值： 
f[4] = f[1]+f[3] , f[2]+f[2] 
f[5] = f[1]+f[4] , f[2]+f[3]

*/ 
