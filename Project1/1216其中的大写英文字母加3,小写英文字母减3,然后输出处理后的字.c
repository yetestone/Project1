/*
输入一串字符串,将其中的大写英文字母加3,小写英文字母减3,然后输出处理后的字符串

输入格式：
输入一行字符串

输出格式：
见输出样例，注意半角冒号

输入样例：
gfhjFG

输出样例：
处理后的字符串:bcegIJ

*/
#include<stdio.h>
int main()
{
	char a[100];
	int i;
	gets(a);
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'A'&&a[i] <= 'Z')
			a[i]+=3;
		if (a[i] <= 'z'&&a[i] >= 'a')
			a[i] -= 3;
	}
	printf("处理后的字符串:");
		puts(a);
	return 0;
}