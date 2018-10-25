#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(){
	string x;
	x = "helloworld";
	cout<<x<<endl;
	x.(x,5);
	// ´íÎóÐ´·¨ £º
	//	[Error] no match for call to '(std::string {aka std::basic_string<char>}) (std::string&, int)' 
	return 0;
}
