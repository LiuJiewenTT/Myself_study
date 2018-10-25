string既然是一个类，就有构造函数和析构函数。String类的构造函数和析构函数如下： 
a) string s; //生成一个空字符串s 
b) string s(str) //拷贝构造函数 生成str的复制品 
c) string s(str,stridx) //将字符串str内"始于位置stridx"的部分当作字符串的初值 
d) string s(str,stridx,strlen) //将字符串str内"始于stridx且长度顶多strlen"的部分作为字符串的初值 
e) string s(cstr) //将C字符串作为s的初值 
f) string s(chars,chars_len) //将C字符串前chars_len个字符作为字符串s的初值。 
g) string s(num,c) //生成一个字符串，包含num个c字符 
h) string s(str,beg,end) //以区间beg;end(不包含end)内的字符作为字符串s的初值 
i) s.~string() //销毁所有字符，释放内存 
--------------------- 
作者：小伙子wp 
来源：CSDN 
原文：https://blog.csdn.net/w2865673691/article/details/12587823 
版权声明：本文为博主原创文章，转载请附上博文链接！
都很简单，也很全面，下面是几个常用的例子：
(以上函数原本有点不完整的地方，我自己补充了一下，经过测试) 
(我的例子都编写在了同目录的文件中，以下是CSDN中的文章的举例)
    string s1;
	string s2="hello s2";
	string s3("hello s3");
	string s4(4,'h');//以四个h字符构成的字符串
	string s5(s4);
