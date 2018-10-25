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
	// 为什么会少一个字符呢？因为iter2应该是终止位置？
	cout<<*iter2<<" *iter2"<<endl;
	++iter2;
	a = a.assign(iter1,iter2);
	cout<<a<<endl;
	cout<<x<<endl;
	cout<<*iter2<<"*iter2"<<endl;
	/* 
	Function : string string::assign(iterator first, iterator last)
	last 最后一个 要 复制的 的 后面 ( while(iter != last) ) 
	string .end() 只向的是最后一个元素，不是最后一个元素后面（神奇） 
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
	// Dev-CPP 虽然支持这个C++11的函数，但这样的写法是正确的，就是不知道怎么错了
	/*
	这是实验性函数，需要头文件：<initializer_list> , 并开启编译开关：-std=c++11
	#if __cplusplus < 201103L
	#error This file requires compiler and library support for the \
	ISO C++ 2011 standard. This support is currently experimental, and must be \
	enabled with the -std=c++11 or -std=gnu++11 compiler options.
	#endif 
	*/ 
	return 0;
}

