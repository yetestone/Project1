/*
��Ŀ����
���������ݣ��ֱ����m��n��������ÿ�������е��������ظ��Ұ���С����������С�
���������������������ͬʱ���ڵ����������û�����������������"NO" ����ģ�
(1)ÿ�������е��������ظ��Ұ���С����������У��������飬Ҳ��������
��������
������m��n��ֵ���ֱ��ʾ�������ݵĸ�����Ȼ�������һ�����ݵ�m���������Լ��ڶ������ݵ�n��������
�������
�������������������ͬʱ������������
��������
5  7
5 9 17 123 698
7 8 9 16 17 92 698
�������
9 17 698
*/
#include<stdio.h>
int bsrch(int a[], int n, int x);
int main()
{
	int long1, long2,i;
	int a[500], b[500];
	scanf("%d%d", &long1, &long2);
	for (i = 0; i < long1; i++)
		scanf("%d", a + i);
	for (i = 0; i < long2; i++)
		scanf("%d", b + i);
	for (i = 0; i < long1; i++)
	{
		if (bsrch(b, long2, *(a + i)) != -1)
			printf("%d ", *(a + i));
	}
}
int bsrch(int a[],int n,int x)
{
	int lower = 0, upper = n - 1, mid, flag = -1;
	if (x == a[lower])return lower;
	else if (x == a[upper])return upper;
	else
		while (flag == -1 && lower <= upper)
		{
			mid = (lower + upper) / 2;
			if (x == a[mid])
				flag = 1;
			else if (x > a[mid])
				lower = mid + 1;
			else
				upper = mid - 1;
		}
	if (flag == 1)
		return mid;
	else
		return flag;
}