#include <stdio.h>
int n, m, p, q;
long long f[21];
int NO[9][2], cnt;
#define in(x,y) x>=0&&x<=n&&y>=0&&y<=m
bool no(int x,int y){
	for(int i=0; i<9; ++i){
		if( NO[i][0]==x && NO[i][1]==y )return true;
	}
	return false;
}
#define ok(x,y) !no(x,y)
void AddNo(int x,int y){
	NO[cnt][0] = p+x , NO[cnt][1] = q+y;
	++cnt;
	NO[cnt][0] = p+x , NO[cnt][1] = q-y;
	++cnt;
	NO[cnt][0] = p-x , NO[cnt][1] = q+y;
	++cnt;
	NO[cnt][0] = p-x , NO[cnt][1] = q-y;
	++cnt;
}
int main(){
	freopen("1.in","r",stdin);
	int i, j;
	scanf("%d %d %d %d", &n, &m, &p, &q);
	AddNo(2,1); AddNo(1,2);
	NO[8][0] = p, NO[8][1] = q;
	f[0] = 1;
	for( i=0; i<=n; ++i){
		for( j=0; j<=m; ++j){
			if( ok(i,j)&&(i|j) ){
				if( in(i,j-1) ) f[j] += f[j-1];
				if( in(i-1,j) );
			}
			else if( i|j ) f[j] = 0;
		}
	}
	printf("%lld", f[m]);
	return 0;
}
