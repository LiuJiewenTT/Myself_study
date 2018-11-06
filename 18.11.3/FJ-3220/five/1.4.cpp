#include <iostream>
#include <stdio.h>
using namespace std;
int mp[16][16];
int n;


inline bool WORK(const int &x,const int &y){
	int i, j, k;
	// increase k at last
	k ^= k;
	for( i=x-1; i && !(mp[i][y]^mp[x][y]) && mp[i][y] ; --i) ;
	k = x-i-1;
	for( i=x+1; i^16 && !(mp[i][y]^mp[x][y]) && mp[i][y] ; ++i) ;
	k += i-x-1;
	if( k>3 ) return true;
	
	k ^= k;
	for( i=y-1; i && !(mp[x][i]^mp[x][y]) && mp[x][i] ; --i) ;
	k = y-i-1;
	for( i=y+1; i^16 && !(mp[x][i]^mp[x][y]) && mp[x][i] ; ++i) ;
	k += i-y-1;
	if( k>3 ) return true;
	
	k ^= k;
	for( i=x-1,j=y-1; i && j && !(mp[i][j]^mp[x][y]) && mp[i][j] ; --i, --j) ;
	k = x-i-1;
	for( i=x+1,j=y+1; i && j && !(mp[i][j]^mp[x][y]) && mp[i][j] ; ++i, ++j) ;
	k += i-x-1;
	if( k>3 ) return true;
	
	k ^= k;
	for( i=x-1,j=y+1; i^16 && j^16 && !(mp[i][j]^mp[x][y]) && mp[i][j] ; --i, ++j) ;
	k = x-i-1;
	for( i=x+1,j=y-1; i^16 && j^16 && !(mp[i][j]^mp[x][y]) && mp[i][j] ; ++i, --j) ;
	k += i-x-1;
	if( k>3 ) return true;
	
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
			if( k > 4 && WORK(i,j) ){
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
