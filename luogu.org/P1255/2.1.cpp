#include <iostream>
#include <stdio.h>
using namespace std;
const int  max1 = 5007;
int n;
long long f[max1];

int main(){
	int i, j;
	scanf("%d", &n);
	f[0] = 0 , f[1] = 1, f[2] = 2;
	for( i=3; i<=n; ++i){
		f[i] = f[i-1]+f[i-2];
	}
	printf("%lld", f[n]);
	return 0;
}
/*
stairs ��¥�ݣ���¥�� 
f[0] = 0
f[1] = 1
f[2] = 2
f[3] = 1+2 = 3
f[3] = f[1]+f[2]
f[i] = f[i-1]+f[i-2]
����ѡ����ͨ����1�������ﻹ��ͨ����2�������� 
*/ 
