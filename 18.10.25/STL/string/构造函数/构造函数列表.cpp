string��Ȼ��һ���࣬���й��캯��������������String��Ĺ��캯���������������£� 
a) string s; //����һ�����ַ���s 
b) string s(str) //�������캯�� ����str�ĸ���Ʒ 
c) string s(str,stridx) //���ַ���str��"ʼ��λ��stridx"�Ĳ��ֵ����ַ����ĳ�ֵ 
d) string s(str,stridx,strlen) //���ַ���str��"ʼ��stridx�ҳ��ȶ���strlen"�Ĳ�����Ϊ�ַ����ĳ�ֵ 
e) string s(cstr) //��C�ַ�����Ϊs�ĳ�ֵ 
f) string s(chars,chars_len) //��C�ַ���ǰchars_len���ַ���Ϊ�ַ���s�ĳ�ֵ�� 
g) string s(num,c) //����һ���ַ���������num��c�ַ� 
h) string s(str,beg,end) //������beg;end(������end)�ڵ��ַ���Ϊ�ַ���s�ĳ�ֵ 
i) s.~string() //���������ַ����ͷ��ڴ� 
--------------------- 
���ߣ�С����wp 
��Դ��CSDN 
ԭ�ģ�https://blog.csdn.net/w2865673691/article/details/12587823 
��Ȩ����������Ϊ����ԭ�����£�ת���븽�ϲ������ӣ�
���ܼ򵥣�Ҳ��ȫ�棬�����Ǽ������õ����ӣ�
(���Ϻ���ԭ���е㲻�����ĵط������Լ�������һ�£���������) 
(�ҵ����Ӷ���д����ͬĿ¼���ļ��У�������CSDN�е����µľ���)
    string s1;
	string s2="hello s2";
	string s3("hello s3");
	string s4(4,'h');//���ĸ�h�ַ����ɵ��ַ���
	string s5(s4);
