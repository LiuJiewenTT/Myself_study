#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
typedef long long ll;
// P 进制数， 对 M = 2^64取模 
const int P = 13331;	// 这是一个质数 
const int M = 1e+7;
const int max1 = 10007;
const int max2 = 1507;
int n, cnt, tot;
char src[max1][max2], obj[max1][max2];
int head[M], nxt[max1];
int vl(const char &r){
	return r-48;
}
int hash(const char *r, int len = strlen(r)){
	int x = 0 ;
	int i , j;
	for ( i=0; i<len; ++i){
		x = ( x*P + vl(r+i) ) % M;
	}
	return x;
}
bool equal(const char *a,const char *b,int lena = strlen(a), int lenb = strlen(b)){
	if( lena ^ lenb ) return 0;
	int i;
	for( i=0; i<lena; ++i){
		if( a[i]^b[i] ) return 0;
	}
	return 1;
}
bool insert(const char *r, int len = strlen(r)){
	int val = hash(r,len);
	for(int i=head[val]; i; i = nxt[i]){
		if( equal(r,obj[i]) ) return 1;
	}
	++tot;
	memcpy(obj[tot],r,sizeof(r));
	nxt[tot] = head[val];
	head[val] = tot;
	return 0;
}
int main(){
	freopen("1.in","r",stdin);
	int i, j;
	scanf("%d" &n);
	for( i=1; i<=n; ++i){
		scanf("%s", src[i]);
		if( insert(src[i]) ){
			++cnt;
		}
	}
	printf("%d", n-cnt);
	return 0;
}

