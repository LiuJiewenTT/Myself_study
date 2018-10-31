#include <iostream>
#include <stdio.h>
using namespace std;


int main(){
	FILE *file ;
	char name[256] ;
	double f_size ;
	cin.getline( name , 256 );
	printf( "%s\n", name );
	file = fopen( name , "rb" );
	if( file != NULL ){
		fseek( file , 0L , SEEK_END );
		f_size = ftell( file ); 
		printf( "%d Byte" , (int)f_size );
//		if( f_size >= 8 )printf( " %.1lf byte" , f_size /= 8 );
		if( f_size >= 1024 )printf( " %.2lf KB" , f_size /= 1024 );
		if( f_size >= 1024 )printf( " %.2lf MB" , f_size /= 1024 );
		if( f_size >= 1024 )printf( " %.2lf GB" , f_size /= 1024 );
	}
	fclose( file );
	system( "pause" );
	return 0;
}

