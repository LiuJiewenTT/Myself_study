#include <iostream>
#include <stdio.h>
using namespace std;
#define P 998244353 
const int max1 = 10007;
typedef long long ll;
int a[(int)1e+7];
int N, M, K, T, maxS;
int q[max1][3];

void pre_work(int lim){
	int i;
	a[0] = a[1] = 1;
	for( i=2; i<=lim; ++i) a[i] = (ll)a[i-1] * i % P;
}
int mul(ll a,ll b){
	ll s = 1;
	for( ; b; b>>=1){
		if( b&1 ) s = s * a % P;
		a = a * a % P;
	}
	return (int)s;
}
int calc(ll n,ll k){
	return int((ll)a[n] * mul(a[n-k],P-2) % P);
}
int main(){
	freopen("dream.in","r",stdin);
	int i, k;
	scanf("%d", &T);
	for( k=1; k<=T; ++k){
		scanf("%d %d %d", &q[k][0], &q[k][1], &q[k][2]);
		maxS = max(max(maxS,q[k][0]),max(q[k][1],q[k][2]));
	}
	pre_work(maxS);
	for( k=1; k<=T; ++k){
		N = q[k][0], M = q[k][1], K = q[k][2];
//		printf("%d %d %d\n", N, M, K);
		N = min(N,M);
		if( N < K ) printf("0\n");
		else printf("%d\n", calc(N,K));
	}
	return 0;
}

