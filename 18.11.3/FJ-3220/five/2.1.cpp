#include <iostream>
#include <stdio.h>
using namespace std;
int mp[16][16], h[226][2], P[16][16];
bool bl[16][16][5];
int n, maxs, ans;

int work0(int x,int y,int s,int dx,int dy){
	int i, j, k = 0, p, q;
	if( dx<0 ) p = 0;	else p = 16;
	if( dy<0 ) q = 0;	else q = 16;
	for( i=x+dx, j=y+dy; i^p && j^q && !(mp[i][j]^mp[x][y]) ; i+=dx, j+=dy) ++k, maxs = max(maxs,P[i][j]), bl[i][j][s]=1;
	return k;
}
#define work1(X,Y,S) bl[X][Y][S]=1,++bl[X][Y][0],work0(X,Y,S,1,0)+work0(X,Y,S,-1,0)
#define work2(X,Y,S) bl[X][Y][S]=1,++bl[X][Y][0],work0(X,Y,S,0,1)+work0(X,Y,S,0,-1)
#define work3(X,Y,S) bl[X][Y][S]=1,++bl[X][Y][0],work0(X,Y,S,1,1)+work0(X,Y,S,-1,-1)
#define work4(X,Y,S) bl[X][Y][S]=1,++bl[X][Y][0],work0(X,Y,S,1,-1)+work0(X,Y,S,-1,1)
bool WORK(int x, int y){
	maxs = P[x][y];
	if( !bl[x][y][1] ) if( work1(x,y,1)>3 ) return true;
	if( !bl[x][y][2] ) if( work2(x,y,2)>3 ) return true;
	if( !bl[x][y][3] ) if( work3(x,y,3)>3 ) return true;
	if( !bl[x][y][4] ) if( work4(x,y,4)>3 ) return true;
	return false;
}
int main(){
	freopen("five.in","r",stdin);
	freopen("five.out","w",stdout);
	int i, j, k, p;
	scanf("%d", &n);
	ans = n;
	for( k=1; k<=n; ++k){
		scanf("%d %d", &i, &j);
		h[k][0] = i , h[k][1] = j;
		P[i][j] = k;
		mp[i][j] = k&1 ? 1 : 2;
	}
	for( k=1; k<=n; ++k){
		if( bl[h[k][0]][h[k][1]][0]^5 ){
			if( k>4 && WORK(h[k][0],h[k][1]) ){
				ans = min(ans,maxs);
			}
		}
	}
	if( ans^n ) printf("%c %d\n", k&1?'A':'B' , ans);
	else printf("Tie");
	fclose(stdin);
	fclose(stdout);
	return 0;
}
