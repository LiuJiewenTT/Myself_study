#include <iostream>
#include <string>
using namespace std;


int main(){
	string x("helloworld");
	cout<<x<<endl;
	/*
	Function: string x(str,stridx,strlen)
	将 x 的初值赋为：字符串 str 的 从"下标" stridx 开始的，最多strlen个字符 
	*/
	string y(x,5,10);
	cout<<y<<endl;
	string z(x,5,3);
	cout<<z<<endl;
	return 0;
}
