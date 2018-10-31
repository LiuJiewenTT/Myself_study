#include <iostream>
#include <stdio.h>
#include <string.h>
using std::max;
using std::min;
const int max1 = 40004;
const int inf = 0x3f3f3f3f;
int a[307][307], b[max1][2];
int n, m, T;

#define out(x) (x^inf?x:-1)
int main(){
	freopen("1.in","r",stdin);
	int i, j, k, p;
	scanf("%d %d %d", &n, &m, &T);
	memset( a, 0x3f , sizeof(a) );
	for( k=1; k<=m; ++k){
		scanf("%d %d %d", &i, &j, &p);
		a[i][j] = p;
//		a[i][j] = min( a[i][j], p );
	}
	for( k=1; k<=T; ++k){
		scanf("%d %d", &b[k][0], &b[k][1]);
	}
	for( k=1; k<=n; ++k){
		for( i=1; i<=n; ++i){
			for( j=1; j<=n; ++j){
				a[i][j] = ( a[i][j] ^ inf ) ? min( a[i][j] , max( ( ( a[i][k] ^ inf ) ? a[i][k] : inf ) , ( ( a[k][j] ^ inf ) ? a[k][j] : inf ) ) ) : inf;
				a[i][j] == -1 ? (a[i][j] = inf) : 0 ;
			}
		}
	}
	for( k=1; k<=T; ++k){
		printf("%d\n", out(a[b[k][0]][b[k][1]]) );
	}
	return 0;
}
