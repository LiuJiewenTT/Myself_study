#include <iostream>
#include <stdio.h>
using std::max;
using std::min;
const int max1 = 40004;
int a[307][307], b[max1][2];
int n, m, T;

int main(){
	freopen("1.in","r",stdin);
	int i, j, k, p;
	scanf("%d %d %d", &n, &m, &T);
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
				a[i][j] = min( a[i][j] , max( a[i][k] , a[k][j] ) );
			}
		}
	}
	for( k=1; k<=T; ++k){
		printf("%d\n", a[b[k][0]][b[k][1]]);
	}
	return 0;
}
