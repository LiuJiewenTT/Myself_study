#include <iostream>
#include <stdio.h>
using namespace std;
int mp[16][16];
int n;

int main(){
	freopen("five.in","r",stdin);
	freopen("five.out","w",stdout);
	int i, j, k, p;
	scanf("%d", &n);
	for( k=1; k<=n; ++k){
		scanf("%d %d", &i, &j);
		mp[i][j] = k&1 ? 1 : 2;
		printf("%d ", mp[i][j]);
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
