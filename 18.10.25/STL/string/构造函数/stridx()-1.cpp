#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(){
	string x;
	x = "helloworld";
	cout<<x<<endl;
	string y(x,5);
	cout<<y<<endl;
	return 0;
}
