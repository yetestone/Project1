/*
��дһ���������������ƶ��ַ����е����ݣ�
��ǰm���ַ��Ƶ���󣬰ѵ�m+1���ַ��Ƶ���ǰ��

�����ʽ��һ���ַ������Լ�����m

�����ʽ���ַ���λ����ַ���

����������
1234567890
3

���������
4567890123
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[50]={'\0'};
	int m,longa;
	scanf("%s%d", a, &m);
	longa = strlen(a);
	memmove(a + longa, a, m);
	puts(a+m);
	return 0;
}