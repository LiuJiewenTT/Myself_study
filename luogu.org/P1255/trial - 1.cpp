#include<bits/stdc++.h>
#define MAXN 5010//�߾���λ��
using namespace std;
struct Int
{
    int len,s[MAXN];
    //������s����洢 len��ʾ����
    //���²���ѹλ...
    Int(){len=1;memset(s,0,sizeof(s));}
    Int(int num){*this=num;}
    Int operator=(const int &num)//��ʼ���صȺ�,������ֵ
	{
	    char a[MAXN];
	    sprintf(a,"%d",num);//������ת��Int��
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
 
