/*
�Ӽ�������10��ѧ���ĳɼ�����ʾ����ͷ�,��߷ֺ�ƽ����

�����ʽ��
����10������

�����ʽ��
�����������ƽ���ɼ�����2λС��

����������
45
76
87
98
76
65
54
87
98
54

���������
ƽ���ɼ���74.00
��߳ɼ���98
��ͳɼ���45
*/
#include<stdio.h>
void xuanze(int a[], int n);
int main()
{
	int mark[10],mark_max,mark_min;
	double mark_ave=0;
	int i;
	for (i = 0; i < 10; i++)
		scanf("%d", mark + i);
	xuanze(mark, 10);
	for (i = 0; i < 10; i++)
	{
		mark_ave += *(mark + i);
	}
	mark_ave /= 10;
	mark_min = mark[0];
	mark_max = mark[9];
	printf("ƽ���ɼ���%.2f\n��߳ɼ���%d\n��ͳɼ���%d\n", mark_ave, mark_max, mark_min);
	return 0;
}
void xuanze(int a[], int n)
{
	int i, j, k, temp;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
			if (a[j] < a[k])k = j;
		if (k != i)
		{
			temp = a[i];
			a[i] = a[k];
			a[k] = temp;
		}
	}
}