#include <stdio.h>
int main(){
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	char ch;
	while( ch = getchar() , ch > 0 ) printf("%c" , ( ch ^ '\r'  ? ch : '\n' ) );
	fclose(stdin);
	fclose(stdout);
	return 0;
}
