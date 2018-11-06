#include <iostream>
#include <stdio.h>
using namespace std;
int mp[16][16];
int n;


bool WORK(int x, int y){
	int i, j, k;
	// increase k at last
	k ^= k;
	for( i=x-1; !(mp[i][y]^mp[x][y]) && mp[i][y] && i ; --i) ;
	k = x-i-1;
	for( i=x+1; !(mp[i][y]^mp[x][y]) && mp[i][y] && i^16 ; ++i) ;
	k += i-x-1;
	if( k>3 ) return true;
	
	k ^= k;
	for( i=y-1; !(mp[x][i]^mp[x][y]) && mp[x][i] && i ; --i) ;
	k = y-i-1;
	for( i=y+1; !(mp[x][i]^mp[x][y]) && mp[x][i] && i^16 ; ++i) ;
	k += i-y-1;
	if( k>3 ) return true;
	
	k ^= k;
	for( i=x-1,j=y-1; !(mp[i][j]^mp[x][y]) && mp[i][j] && i && j; --i, --j) ;
	k = x-i-1;
	for( i=x+1,j=y+1; !(mp[i][j]^mp[x][y]) && mp[i][j] && i && j; ++i, ++j) ;
	k += i-x-1;
	if( k>3 ) return true;
	
	k ^= k;
	for( i=x-1,j=y+1; !(mp[i][j]^mp[x][y]) && mp[i][j] && i^16 && j^16; --i, ++j) ;
	k = x-i-1;
	for( i=x+1,j=y-1; !(mp[i][j]^mp[x][y]) && mp[i][j] && i^16 && j^16; ++i, --j) ;
	k += i-x-1;
	if( k>3 ) return true;
	
	return false;
}
int main(){
	freopen("five.in","r",stdin);
	freopen("five.out","w",stdout);
	int i, j, k, p;
	scanf("%d", &n);
	for( k=1; k<=n; ++k){
		scanf("%d %d", &i, &j);
		mp[i][j] = k&1 ? 1 : 2;
		if( k > 4 && WORK(i,j) ){
			printf("%c %d\n", k&1?'A':'B' , k);
			break;
		}
	}
	
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
