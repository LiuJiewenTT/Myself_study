#include <iostream>
#include <string>
using namespace std;


int main(){
	string x("helloworld");
	cout<<x<<endl;
	/*
	Function: string x(str,stridx,strlen)
	�� x �ĳ�ֵ��Ϊ���ַ��� str �� ��"�±�" stridx ��ʼ�ģ����strlen���ַ� 
	*/
	string y(x,5,10);
	cout<<y<<endl;
	string z(x,5,3);
	cout<<z<<endl;
	return 0;
}
