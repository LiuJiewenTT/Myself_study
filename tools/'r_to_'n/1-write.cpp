#include <stdio.h>
// 1-write '\r'
int main(){
	freopen("1.in","w",stdout);
	printf("a\rb\rc\r");
	fclose(stdout);
	return 0;
}

