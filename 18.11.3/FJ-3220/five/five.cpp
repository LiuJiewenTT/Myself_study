#include <iostream>
#include <stdio.h>
using namespace std;
int mp[16][16], cnt[3][16][4];
int n;

inline void add(int s[16][4],const int &x,const int &y,const int &r){
	++s[y][0], ++s[x][1], ++s[x][2], ++s[x][3];
}
inline bool WORK(const int &x,const int &y, int s[16][4]){
	int i, j, k;
	// increase k at last
	if( s[y][0]>4 ){
		k ^= k;
		for( i=x-1; i && !(mp[i][y]^mp[x][y]) && mp[i][y] && k^5 ; --i) ++k;
	//	k = x-i-1;
		for( i=x+1; i^16 && !(mp[i][y]^mp[x][y]) && mp[i][y] && k^5 ; ++i) ++k;
	//	k += i-x-1;
		if( k>3 ) return true;
	}

	if( s[x][1]>4 ){
		k ^= k;
		for( i=y-1; i && !(mp[x][i]^mp[x][y]) && mp[x][i] && k^5 ; --i) ++k;
	//	k = y-i-1;
		for( i=y+1; i^16 && !(mp[x][i]^mp[x][y]) && mp[x][i] && k^5 ; ++i) ++k;
	//	k += i-y-1;
		if( k>3 ) return true;
	}

	if( s[x][2]>4 ){
		k ^= k;
		for( i=x-1,j=y-1; i && j && !(mp[i][j]^mp[x][y]) && mp[i][j] && k^5 ; --i, --j) ++k;
	//	k = x-i-1;
		for( i=x+1,j=y+1; i && j && !(mp[i][j]^mp[x][y]) && mp[i][j] && k^5 ; ++i, ++j) ++k;
	//	k += i-x-1;
		if( k>3 ) return true;
	}
	
	if( s[x][3]>4 ){
		k ^= k;
		for( i=x-1,j=y+1; i^16 && j^16 && !(mp[i][j]^mp[x][y]) && mp[i][j] ; --i, ++j) ++k;
	//	k = x-i-1;
		for( i=x+1,j=y-1; i^16 && j^16 && !(mp[i][j]^mp[x][y]) && mp[i][j] ; ++i, --j) ++k;
	//	k += i-x-1;
		if( k>3 ) return true;	
	}
	
	
	return false;
}
int main(){
	freopen("five.in","r",stdin);
	freopen("five.out","w",stdout);
	int i, j, k, p;
	scanf("%d", &n);
	if( n>4 ) {
		for( k=1; k<=n; ++k){
			scanf("%d %d", &i, &j);
			mp[i][j] = k&1 ? 1 : 2;
			add(cnt[mp[i][j]],i,j,mp[i][j]);
			if( k > 4 && WORK(i,j,cnt[mp[i][j]]) ){
				printf("%c %d\n", k&1?'A':'B' , k);
				break;
			}
		}
	}
	if( k>n ) printf("Tie");
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
