/*
��Ŀ����
�����ַ������ж��ַ����е���ĸ�Ƿ񹹳ɻ��Ĵ������Ĵ���ָ�ַ�����������������ͬ���ַ������硰abba����aba����aa�����ǻ��Ĵ�������abbc����abc����ac�����ǻ��Ĵ���
��������
�����ַ������ַ�������ĸ����������ĸ�ַ���ɣ����Ȳ�����80���ַ���
�������
��ĸ���ɻ��Ĵ������"���Ĵ� YES" ��ĸ�����ɻ��Ĵ������"�ַ��� NO"
��������
a13b2b3456a
�������
accb NO
*/
#include<stdio.h>
#include<string.h>
void reverse(char b[]);
void exchang(char *a, char *b);
int main()
{
	char a[100],b[100],temp_b[200] = "";
	int i, j=0;
	gets(a);
	for (i = 0;1; i++)
	{
		if ((a[i] <= 'z'&&a[i] >= 'a') || (a[i] <= 'Z'&&a[i] >= 'A')||(a[i]=='\0'))
		{
			b[j] = a[i];
			j++;
		}
		if (a[i] == '\0')break;
	}
	strcpy(temp_b, b);
	reverse(temp_b);
	if (strcmp(temp_b, b) == 0)
		printf("YES");
	else
		printf("NO");
	return 0;
}
void reverse(char b[])
{
	int i, j;
	for (i = 0, j = strlen(b) - 1; i == j; i++, j--)
	{
		exchang(&b[i], &b[j]);
	}
}
void exchang(char *a,char *b)
{
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}