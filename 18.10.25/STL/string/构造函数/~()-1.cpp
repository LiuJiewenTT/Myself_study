#include <iostream>
#include <string>
using namespace std;


int main(){
//	freopen("~()-1.err","w",stderr);
	string x("helloworld");
	cout<<x<<endl;
	x.~string();
	cout<<x<<endl;
	//���ﲻ���������������ֹͣ���У�����й¶�ڴ棩 
//	fclose(stderr);
	return 0;
}
