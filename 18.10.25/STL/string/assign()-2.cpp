#include <iostream>
#include <string>
#include <iterator>
#include <initializer_list>
using namespace std;

int main(){
	string x;
	cout<<x<<"#"<<endl;
	x = "helloworld";
	cout<<x<<endl;
	cout<<"y"<<endl;
	string y = x.assign("hello");
	cout<<y<<endl;
	string::iterator iter1 = x.begin(), 
					 iter2 = x.end();
	cout<<"z"<<endl;
	string z = z.assign(x);
	cout<<z<<endl;
	cout<<"a"<<endl;
	string a ;
	a = a.assign(iter1,iter2);
	cout<<a<<endl;
	// Ϊʲô����һ���ַ��أ���Ϊiter2Ӧ������ֹλ�ã�
	cout<<*iter2<<" *iter2"<<endl;
	++iter2;
	a = a.assign(iter1,iter2);
	cout<<a<<endl;
	cout<<x<<endl;
	cout<<*iter2<<"*iter2"<<endl;
	/* 
	Function : string string::assign(iterator first, iterator last)
	last ���һ�� Ҫ ���Ƶ� �� ���� ( while(iter != last) ) 
	string .end() ֻ��������һ��Ԫ�أ��������һ��Ԫ�غ��棨���棩 
	*/
	cout<<"b"<<endl;
	string b;
	b = b.assign("world",0,6);
	cout<<b<<endl;
	cout<<"c"<<endl; 
	string c;
	c.assign((const char*)"hello!",4);
	cout<<c<<endl;
	x.assign("helloworld!");
	cout<<"NEW x = "<<x<<endl;
//	cout<<"d"<<endl;
//	string d;
//	d.assign({'h','e','l','l','o','!'});
//	cout<<d<<endl;
//	cout<<"s"<<endl;
	string s;
  // assign(std::initializer_list<charT> ilist)
	s.assign((initializer_list<char>){ 'C', '-', 's', 't', 'y', 'l', 'e' });
	std::cout << s << '\n'; // "C-style"
	// Dev-CPP ��Ȼ֧�����C++11�ĺ�������������д������ȷ�ģ����ǲ�֪����ô����
	/*
	����ʵ���Ժ�������Ҫͷ�ļ���<initializer_list> , ���������뿪�أ�-std=c++11
	#if __cplusplus < 201103L
	#error This file requires compiler and library support for the \
	ISO C++ 2011 standard. This support is currently experimental, and must be \
	enabled with the -std=c++11 or -std=gnu++11 compiler options.
	#endif 
	*/ 
	return 0;
}

