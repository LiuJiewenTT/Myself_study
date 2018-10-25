#include <iostream>
#include <string>
using namespace std;

int main(){
	string x;
	cout<<x<<"#"<<endl;
	x = "helloworld";
	cout<<x<<endl;
	string y = x.assign("hello");
	cout<<y<<endl;
	return 0;
}
