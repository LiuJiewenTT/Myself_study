#include <iostream>
#include <stdio.h>
using namespace std;
const int max1 = 107;
const int max2 = 100007;
int n, m, ans;
int f[max1][max1];
int hd[max1], to[max2], nxt[max2];
int h[max1];

int main(){
	freopen("1.in","r",stdin);
	int i, j, k;
	scanf("%d %d", &n, &m);
	for( i=1; i<=m; ++i){
		scanf("%d", h+i);
	}
	for( i=1; i<=n; ++i){
		for( j=1; j<=n; ++j){
			scanf("%d", &f[i][j]);
		}
	}
	for( k=1; k<=n; ++k) {
		for( i=1; i<=n; ++i){
			for( j=1; j<=n; ++j){
				f[i][j] = min(f[i][k]+f[k][j],f[i][j]);
			}
		}
	}
	for( i=2; i<=m; ++i){
		ans += f[h[i-1]][h[i]];
	}
	printf("%d", ans);
	return 0;
}

