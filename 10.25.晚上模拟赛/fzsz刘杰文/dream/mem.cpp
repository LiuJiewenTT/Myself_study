#include <iostream>
#include <stdio.h>
//using namespace std;
using std::cout;
int a[(int)1e+7]; 

int main(){
	cout<<sizeof(a)*1.0/1024/1024<<"M";
	return 0;
}

