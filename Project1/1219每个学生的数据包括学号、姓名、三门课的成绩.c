/*
��Ŀ����

��5��ѧ����ÿ��ѧ�������ݰ���ѧ�š����������ſεĳɼ������ݴӼ������룬Ҫ���ӡ��ÿ��ѧ�����ܷ֡����ſε���ƽ���ɼ����Լ��ܷ���ߵ�ѧ������

��������

����5��ѧ�������ݣ�ÿ��ѧ�������ݰ���ѧ�š����������ſεĳɼ�

�������

���ÿ��ѧ�����ܷ֡����ſε���ƽ���ɼ����Լ��ܷ���ߵ�ѧ������(����һλС��)

��������

201090101 ���� 89 88 73201090102 ���� 87 55 91201090103 ���� 61 94 84201090104 ���� 87 71 61201090105 ���� 76 80 90
�������

���� �ܷ� ƽ���ɼ����� 250   83.3���� 233   77.7���� 239   79.7���� 219   73.0���� 246   82.0�ܷ�����ߵ�ѧ����Ϣ���£�201090101 ���� 89 88 73

*/
#include<stdio.h>
double sum(double a[], int n);
int mark_sum_max(struct student group[], int n);
struct student
{
	int id;
	char name[20];
	double score[3];
	double sum;
};
int main()
{
	struct student group[5];
	int i,i_temp;
	for (i = 0; i < 5; i++)
	{
		scanf("%9d%s%lf%lf%lf", &group[i].id,group[i].name,&group[i].score[0],&group[i].score[1],&group[i].score[2]);
		group[i].sum = sum(group[i].score,3);
	}
	i_temp = mark_sum_max(group, 5);
	printf("\n���� �ܷ� ƽ���ɼ�\n");
	for (i = 0; i < 5; i++)
		printf("%s %.0f %.1f\n", group[i].name, group[i].sum, group[i].sum / 3.0);
	printf("�ܷ�����ߵ�ѧ����Ϣ����:\n");
	printf("%d %s %.0f %.0f %.0f\n", group[i_temp].id, group[i_temp].name, group[i_temp].score[0], group[i_temp].score[1], group[i_temp].score[2]);
	return 0;
}double sum(double a[], int n)
{
	int i;
	double sum=0;
	for (i = 0; i < n; i++)
		sum += a[i];
	return sum;
}
int mark_sum_max(struct student group[],int n)
{
	double max = group[0].sum;
	int i,i_temp=0;
	for (i = 1; i < n; i++)
	{
		if (max < group[i].sum)
		{
			max = group[i].sum;
			i_temp = i;
		}
	}
	return i_temp;
}