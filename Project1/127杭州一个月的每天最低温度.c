/*
��Ŀ����
���뺼��һ���µ�ÿ������¶ȣ���������µ�ƽ������¶ȣ���ͳ������¶ȸ��ڡ����ڡ�����ƽ������¶ȵ�������
��������
����������µ������������������ÿ�������¶ȣ���������֮���ÿո���
�������
����¶� ���ڡ����ڡ����� ƽ������¶ȵ�������ÿ���������ռһ�С�
��������
31 3 4 1 2 2 4 5 1 -1 2 3 2 -1 -1 -1 1 2 1 2 -2 -2 -2 1 7 5 2 6 7 8 9 12
�������
12
7
12
*/
#include<stdio.h>
int main()
{
	int day,i,count_high=0,count_equal=0,count_low=0;
	int c[40],ave;
	scanf("%d", &day);
	for (i = 0; i < day; i++)
	{
		scanf("%d", &c[i]);
	}
	for (i = 0,ave=0; i < day; i++)
	{
		ave+=c[i];
	}
	ave /= day;
	for (i = 0; i < day; i++)
	{
		if (c[i] > ave)count_high++;
		else if (c[i] < ave)count_low++;
	}
	count_equal = day - count_high - count_low;
	printf("%d\n%d\n%d", count_high, count_equal, count_low);
	return 0;
}