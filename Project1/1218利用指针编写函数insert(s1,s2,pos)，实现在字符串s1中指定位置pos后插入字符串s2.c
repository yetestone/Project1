/*
����ָ���д����insert(s1,s2,pos)��ʵ�����ַ���s1��ָ��λ��pos������ַ���s2��


�����ʽ���ַ���s1��s2�ʹ������λ��pos
�����ʽ���������봦�������ַ���

����������
asdfgh
jkl
1

���������
asjkldfgh
*/
#include<stdio.h>
#include<string.h>
void insert(char *s1, char *s2, int pos);
int main()
{
	char s1[50] = { '\0' }, s2[50] = {'\0'};
	int pos;
	gets(s1);
	gets(s2);
	scanf("%d", &pos);
	insert(s1, s2, pos+1);
	puts(s1);
	return 0;
}
void insert(char *s1, char *s2, int pos)
{
	char s3[30] = {" "};
	strcpy(s3, s2);
	strcat(s3, s1 + pos);
	strcpy(s1 + pos, s3);
}