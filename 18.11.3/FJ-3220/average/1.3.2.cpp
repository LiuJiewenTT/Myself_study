#include <iostream>
#include <stdio.h>
#include <limits.h>
using namespace std;
const int max1 = 50007;
#define lson(x) (o<<1)
#define rson(x) (o<<1|1)

struct pua{
	int MAX, MIN;
	double MAAV;
	pua(){
		clear();
	}
	inline void clear(){
		MAX = 0, MIN = INT_MAX;
		MAAV = 0;
	}
	inline pua(const int &a){
		MAX = a , MIN = a;
		MAAV = 0;
	}
	inline pua(const pua &a, const pua &b){
		MAX = max( a.MAX , b.MAX );
		MIN = min( a.MIN , b.MIN );
		MAAV = max( a.MAAV , b.MAAV );
	}
} d[max1<<2];
int n, a[max1], K;

inline double calc(const pua &x, const int &lens){
	return double(x.MAX-x.MIN)/lens;
}
inline pua query(int o, int l, int r, int L, int R){
	if( r < L || l > R ) return pua();
	if( l <= L && R <= r ){
		return d[o];
	}
	pua a, b, c;
	a = query( lson(o) , l , r , L , ( L + R ) >> 1 );
	b = query( rson(o) , l , r , ( ( L + R ) >> 1 ) + 1 , R );
	c = pua(a,b);
	c.MAAV = max( c.MAAV , calc(c,r-l+K) );
	return c;
}
inline pua build(int o, int L, int R){
	if( L==R ){
		return d[o] = pua(a[L]);
	}
	pua a, b;
	a = build( lson(o) , L , ( L + R ) >> 1 );
	b = build( rson(o) , ( ( L + R ) >> 1 ) + 1 , R );
	d[o] = pua(a,b);
	d[o].MAAV = max( d[o].MAAV , calc(d[o],R-L+K) );
	return d[o];
}
inline char gc(){
	static char buf[max1], *p1=buf, *p2=buf;
	return p1==p2&&(p2=(p1=buf)+fread(buf,1,max1,stdin),p1==p2)?EOF:*p1++;
}
inline int read(){
	static char ch;
	static int s = 0;
	while( ch = gc() , ch<48 || ch>57 ) ;
	s = ch - 48;
	while( ch = gc() , ch>47 && ch<58 ) s = (s<<3)+(s<<1)+ ch-48;
	return s;
}
int main(){
	freopen("average.in","r",stdin);
//	freopen("average.out","w",stdout);
	int T;
	int i, j, k, l, r;
	double ans;
	scanf("%d", &T);
	while(T--){
		scanf("%d %d %d %d", &n, &K, &l, &r);
		for( k=1; k<=n; ++k) a[k] = read();
		build(1,1,n);
		ans = query(1,1,n,l,r).MAAV;
		printf("%.4lf\n", ans);
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
