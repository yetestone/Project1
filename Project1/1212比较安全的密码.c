/*
��Ŀ����

����һ���Ƚϰ�ȫ����������Ӧ�������������������� 
(1)���볤�ȴ��ڵ���8���Ҳ�Ҫ����16�� 
(2).�����е��ַ�Ӧ���������桰�ַ�����������е��������顣 
���ĸ��ַ����ֱ�Ϊ�� 1.��д��ĸ��A,B,C...Z; 2.Сд��ĸ��a,b,c...z; 3.
���֣�0,1,2...9; 4.������ţ�~,!,@,#,$,%,^; 
����һ�����룬�����������ж����ǲ���һ����ȫ�����롣

��������

ÿ�����ʵ������һ�����루�������Ϊ50�����������������������ַ���

�������

����ÿ������ʵ�����ж���������ǲ���һ����ȫ�����룬�ǵĻ����YES���������NO��

��������
a1b2c3d4
Linle@ACM
�������
NO
YES
*/
#include<stdio.h>
#include<string.h>
int others(char c);
int main()
{
	char password[51];
	int i;
	int count[4] = {0},countsum=0;
	gets(password);
	if (strlen(password) < 8 && strlen(password) > 16)
	{
		printf("NO");
		return 0;
	}
	for (i = 0; password[i] != '\0'; i++)
	{
		if (password[i] >= 'a'&&password[i] <= 'z')
		{
			count[0]++;
			continue;
		}
		if (password[i] >= 'A'&&password[i] <= 'B')
		{
			count[1]++;
			continue;
		}
		if (password[i] >= '0'&&password[i] <= '9')
		{
			count[2]++;
			continue;
		}
		if (others(password[i]))
		{
			count[3]++;
			continue;
		}		
	}
	for (i = 0; i<4; i++)
		if (count[i] != 0)
			countsum++;
	if (countsum >= 3)
		printf("YES");
	else
		printf("NO");
	return 0;
}


int others(char c)
{
	switch (c)
	{
	case '~':
	case '!':
	case '@':
	case '#':
	case '$':
	case '%':return 1;
	default:return 0;
	}
}


/*

#include<stdio.h>
main()
{
	char a[50], b[50], *p, *q;
	int count1 = 0, count2 = 0, flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0, m, n, flag5 = 0, flag6 = 0, flag7 = 0, flag8 = 0;
	gets(a);
	gets(b);
	p = a;
	q = b;
	for (; *p != '\0'; p++)
		count1++;
	for (p = a; *p != '\0'; p++)
	{
		if ('a' <= *p&&*p <= 'z')
			flag1 = 1;
		if ('A' <= *p&&*p <= 'Z')
			flag2 = 1;
		if ('0' <= *p&&*p <= '9')
			flag3 = 1;
		if (*p == '~' || *p == '!' || *p == '@' || *p == '#' || *p == '$' || *p == '%' || *p == '^')
			flag4 = 1;
	}
	m = flag1 + flag2 + flag3 + flag4;
	for (; *q != '\0'; q++)
		count2++;
	for (q = b; *q != '\0'; q++)
	{
		if ('a' <= *q&&*q <= 'z')
			flag5 = 1;
		if ('A' <= *q&&*q <= 'Z')
			flag6 = 1;
		if ('0' <= *q&&*q <= '9')
			flag7 = 1;
		if (*q == '~' || *q == '!' || *q == '@' || *q == '#' || *q == '$' || *q == '%' || *q == '^')
			flag8 = 1;
	}
	m = flag1 + flag2 + flag3 + flag4;
	n = flag5 + flag6 + flag7 + flag8;
	if (8 <= count1 && count1<16 && m >= 3)
		printf("TES\n");
	else printf("NO\n");
	if (8 <= count2 && count2<16 && n >= 3)
		printf("TES");
	else printf("NO");
}
*/