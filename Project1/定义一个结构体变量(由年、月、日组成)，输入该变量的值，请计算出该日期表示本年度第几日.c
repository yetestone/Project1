/*
����һ���ṹ�����(���ꡢ�¡������)��
����ñ�����ֵ�������������ڱ�ʾ����ȵڼ��ա�

��1������Ҫ��
���룺��ʾ�ꡢ�¡��յ���������
�����������еĵڼ���
��2���������
2015 7 29        ���������ݣ�
210                   �������������
*/
#include<stdio.h>
struct dayst 
{
	int year;
	int month;
	int day;
	int flag;
};
int main()
{
	struct dayst a;
	int i,allday=0;
	int day[2][12] = { {31,28,31,30,31,30,31,31,30,31,30,31},{ 31,29,31,30,31,30,31,31,30,31,30,31 } };
	scanf("%d%d%d", &a.year, &a.month, &a.day);
	if (a.year % 400 == 0 || (a.year % 4 == 0 && a.year % 100 != 0))
		a.flag = 1;
	else
		a.flag = 0;
	for (i = 0; i < a.month-1; i++)
		allday += day[a.flag][i];
	allday += a.day;
	printf("%d", allday);
	return 0;
}