/*
��д�����������ǽ�һ���ַ����е�ÿ���ַ�����С������������


�����ʽ��һ���ַ���

�����ʽ��ÿ���ַ�����С�����������ַ���

����������
bau

���������
abu
*/
#include<string.h>
#include<stdio.h>
void xuanze(char a[]);
int main()
{
	char a[100];
	gets(a);
	xuanze(a);
	puts(a);
	return 0;
}
void xuanze(char a[])
{
	int i, j, k,n=strlen(a);
	char temp;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
			if ((int)a[j] < (int)a[k])k = j;
		if (k != i)
		{
			temp = a[i];
			a[i] = a[k];
			a[k] = temp;
		}
	}
}