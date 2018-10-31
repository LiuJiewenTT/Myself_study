#include<bits/stdc++.h>
#define MAXN 5010//高精的位数
using namespace std;
struct Int
{
    int len,s[MAXN];
    //用数组s倒序存储 len表示长度
    //萌新不会压位...
    Int(){len=1;memset(s,0,sizeof(s));}
    Int(int num){*this=num;}
    Int operator=(const int &num)//开始重载等号,用来赋值
	{
	    char a[MAXN];
	    sprintf(a,"%d",num);//将整数转成Int型
	    len=strlen(a);
		for(int i=len-1;i>=0;--i)
	    	s[i]=a[len-i-1]-'0';
	    return *this;
	} 
};

int main(){
	Int x;
	return 0;
} 
 
