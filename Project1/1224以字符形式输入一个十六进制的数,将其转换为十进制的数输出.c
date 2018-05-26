/*
以字符形式输入一个十六进制的数,将其转换为十进制的数输出

输入格式：
输入一个十六进制的数

输出格式：
见输出样例，注意采用半角的冒号

输入样例：
abc

输出样例：
转换为十进制的数是:2748

#include<stdio.h>
int main()
{
	int number;
	scanf("%x", &number);
	printf("转换为十进制的数是:%d", number);
	return 0;

}
/***************************************************************************/
#include<stdio.h>
#include<ctype.h>
#include<math.h>
int main()
{
	char ch[10] = {'\0'},*chmove=ch;
	int i,number=0;
	scanf("%s", ch);
	for (; *chmove != '\0'; chmove++);
	chmove--;
	for (i = 0;*chmove!=-52; i++,chmove--)
	{
		if (isdigit(*chmove) != 0)
			number += (*chmove - '0') * pow(16,i);
		else
		{
			tolower(*chmove);
			number += (*chmove - 'a' + 10)* pow(16, i);
		}
	}
	printf("转换为十进制的数是:%d", number);
	return 0;

}
/**********************************************************
#include<stdio.h>
int main() {
	char s[50];
	scanf("%s", s);
	int t;
	long sum = 0;
	for (int i = 0; s[i]; i++) {
		if (s[i] <= '9')
			t = s[i] - '0';
		else
			t = s[i] - 'A' + 10;
		sum = sum * 16 + t;
	}
	printf("%ld\n", sum);
	return 0;
}
*************************************************************/