/*
���ַ���ʽ����һ��ʮ�����Ƶ���,����ת��Ϊʮ���Ƶ������

�����ʽ��
����һ��ʮ�����Ƶ���

�����ʽ��
�����������ע����ð�ǵ�ð��

����������
abc

���������
ת��Ϊʮ���Ƶ�����:2748

#include<stdio.h>
int main()
{
	int number;
	scanf("%x", &number);
	printf("ת��Ϊʮ���Ƶ�����:%d", number);
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
	printf("ת��Ϊʮ���Ƶ�����:%d", number);
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