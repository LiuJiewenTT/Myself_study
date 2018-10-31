#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	freopen("1.in","r",stdin);
	char ch;
	while( ch = getchar() , ch > 0 ) if( ch=='\r' ) printf("f");
	printf(" ch = %d ", ch);
	fclose(stdin);
	return 0;
}

