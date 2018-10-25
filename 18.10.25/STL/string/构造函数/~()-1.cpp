#include <iostream>
#include <string>
using namespace std;


int main(){
//	freopen("~()-1.err","w",stderr);
	string x("helloworld");
	cout<<x<<endl;
	x.~string();
	cout<<x<<endl;
	//这里不能输出，否则会出错，停止运行（可以泄露内存） 
//	fclose(stderr);
	return 0;
}
