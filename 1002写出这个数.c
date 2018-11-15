/*
1002 写出这个数 （20 分）

读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：

每个测试输入包含 1 个测试用例，即给出自然数 n 的值。这里保证 n 小于 10
​100
​​ 。

输出格式：

在一行内输出 n 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。

输入样例：

1234567890987654321123456789
输出样例： 

yi san wu
*/
#include  <stdio.h> 
int main() 
{ 
	int i=0,b=0;
	char a[101],c[4];
	gets(a);
	do{
		b+=a[i]-48;
		i++;
	}while(a[i]!='\0');
	i=0;
	do
	{
		c[i]=b%10+48;
		i++;
		b=b/10;
	}while(b%10!=0||b>0);
	i--;
	do{
		switch(c[i]-48)
		{
			case (0): 
			printf("ling");
			break;
			case (1):
			printf("yi");
			break;
			case (2):
			printf("er");
			break;
			case (3):
			printf("san");
			break;
			case (4):
			printf("si");
			break;
			case (5):
			printf("wu");
			break;
			case (6):
			printf("liu");
			break;
			case (7):
			printf("qi");
			break;
			case (8):
			printf("ba");
			break;
			case (9):
			printf("jiu");
			break;
		}
		if(i!=0)
		printf(" "); 
		i--;
	}while(i>=0);
	return 0;
}
