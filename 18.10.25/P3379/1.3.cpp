#include <stdio.h>
#include<iostream>
const int max1 = 500070;
struct node{
	int fa, to, now, nxt, dth;
	node(){
		fa = to = now = nxt = dth = 0;
	}
} eg[max1];
int hd[max1], cnte;
int N, M, S;

void addedg(int x,int y){
	static node *EG;
	EG = &eg[++cnte];
	EG->to = y;
	EG->now = x;
	EG->fa = x;
	eg[hd[x]].nxt = cnte;
	hd[x] = cnte;
//	if( !fa[y] ) fa[y] = x;
}
#define addedge(x,y) addedg(x,y),addedg(y,x);
void DFS(int now,int fa,int step){
//	eg[now].dth = step;
//	eg[now].fa = fa;
	int i, j;
	for( i=now; i; i = eg[i].nxt){
		eg[i].dth = step;
		eg[i].fa = fa;
		if( eg[i].to ^ fa ){
			DFS(hd[eg[i].to],eg[i].now,step+1);
		}
	}
}
int lca(int x,int y){
	if( x == y ) return x;
	int i = eg[hd[x]].dth - eg[hd[y]].dth;
	if( i > 0 ){
		return lca(eg[hd[x]].fa,y);
	}
	else if( i < 0 ){
		return lca(x,eg[hd[y]].fa);
	}
//	while( x^y ){
//		x = eg[hd[x]].fa;
//		y = eg[hd[y]].fa;
//	}
	return lca(eg[hd[x]].fa,eg[hd[y]].fa);
}
int main(){
	freopen("1.in","r",stdin);
//	freopen("1.out","w",stdout);
	int i, j, k, p;
	scanf("%d %d %d", &N, &M, &S);
	for( k=1; k<N; ++k){
		scanf("%d %d", &i, &j);
		addedge(i,j);
	}
	DFS(hd[S],0,1);
	for( i=1; i<=N; ++i) {
		printf("%d ", hd[i]);
	}
	std::cout<<std::endl;
	for(int i=1;i<=N;i++)
	    std::cout<<eg[hd[i]].fa<<' ';
	std::cout<<std::endl;
	for( k=1; k<=M; ++k){
		scanf("%d %d", &i, &j);
		printf("%d\n", lca(i,j));
	}
	return 0;
}
