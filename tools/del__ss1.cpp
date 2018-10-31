#include <iostream>
#include <stdio.h>
#include <string.h>
#define max1 10000001
using namespace std;

char in[ max1 ] ;
int main(){
	
	int i, j, len;
	cin.getline(in, max1);
	len= strlen(in);
	for( i=0; i< len; ++i){
		if( in[i]=='\\' ){
			continue;
		}
		else printf("%c", in[i]);
	}
	
	return 0;
}

