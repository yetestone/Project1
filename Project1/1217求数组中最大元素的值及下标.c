/*
��дһ������,����һ��20��Ԫ�����ڵ��������飬�����������Ԫ�ص�ֵ���±�

�����ʽ��
����һ���������ÿո�ָ�


�����ʽ��
���Ԫ��ֵ���±��ÿո�ָ�


����������
12 45 67

���������
67 2
*/
/******************************************************************************************************/
//����һ��4x4�Ķ�ά���飬��������������ֵ�Լ����ֵ���±�
/*#include<stdio.h>
int main()
{
	int i, a[4][4], j;
	int maxdata, i_max, j_max;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			scanf("%d", *(a + i) + j);
	i_max = 0;
	j_max = 0;
	maxdata = a[0][0];
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
		{
			if (a[i][j]>maxdata)
			{
				maxdata = a[i][j];
				i_max = i;
				j_max = j;
			}
		}
	printf("%d\n[%d][%d]", maxdata, i_max, j_max);
	return 0;
}
/******************************************************************************************************/
#include<stdio.h>
int main()
{
	int a[100];
	int i = 0;
	do {
		scanf("%d", a + i);
		i++;
	} while (getchar() != '\n');
	int maxdata = a[0], i_max = 0;
	for (i--; i > 0; i--)
	{
		if (maxdata < a[i])
		{
			maxdata = a[i];
			i_max = i;
		}
	}
	printf("%d %d\n", maxdata, i_max);
	return 0;
}