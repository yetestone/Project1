//Problem D
//Time Limit : 2000 / 1000ms(Java / Other)   Memory Limit : 65536 / 32768K(Java / Other)
//Total Submission(s) : 68   Accepted Submission(s) : 40
//Problem Description
//��������ٲ�AC����
//���ǵġ���
//�������ʲô�أ���
//�������籭ѽ����������
//��@#$%^&*%...��
//
//ȷʵ��ˣ����籭���ˣ����ԵĽ���Ҳ���ˣ����ƺܶ�ACMerҲ���׿����ԣ���������ˡ�
//��Ϊ���ԣ�һ���뿴������������ı�������Ȼ����Ϊ��ʱ���ĺ����꣬��һ�����ῴһЩ�����Ľ�Ŀ������������������Զ��Ҫ���ǹ��Ĺ��Ҵ��£����ǳ�6 + 7������Ů�����Լ���СѾ�ġ����Ĵǵ䡷�ȵȣ��������Ѿ�֪����������ϲ�����ĵ��ӽ�Ŀ��ת��ʱ������������𣿣�Ŀ�����ܿ��������������Ŀ��
//
//
//Input
//�������ݰ����������ʵ����ÿ������ʵ���ĵ�һ��ֻ��һ������n(n <= 100)����ʾ��ϲ�����Ľ�Ŀ��������Ȼ����n�����ݣ�ÿ�а�����������Ti_s, Ti_e(1 <= i <= n)���ֱ��ʾ��i����Ŀ�Ŀ�ʼ�ͽ���ʱ�䣬Ϊ�˼����⣬ÿ��ʱ�䶼��һ����������ʾ��n = 0��ʾ�����������������
//
//
//Output
//����ÿ������ʵ������������������ĵ��ӽ�Ŀ�ĸ�����ÿ������ʵ�������ռһ�С�
//
//
//Sample Input
//12
//1 3
//3 4
//0 7
//3 8
//15 19
//15 20
//10 15
//8 18
//6 12
//5 10
//4 14
//2 9
//0
//
//
//Sample Output
//5


#include<stdio.h>
#include<stdlib.h>
typedef struct test
{
	int start;
	int end;
} STR;

int cmp(const void *a, const void *b)
{
	STR *aa = (STR *)a;
	STR *bb = (STR *)b;
	return(((aa->end)>(bb->end)) ? 1 : -1);
}

int main()
{
	while (1)
	{
		int n, i,sum=1,j;
		STR a[100];
		scanf("%d", &n);
		if (n == 0)
			return 0;
		for (i = 0; i < n; i++)
		{
			scanf("%d %d", &a[i].start, &a[i].end);
		}
		qsort(a, n, sizeof(a[0]), cmp);
		for (i = 0; ; )
		{
			for (j = i+1;j<n; j++)
			{
				if (a[i].end <= a[j].start)
				{
					sum++;
					i = j;
					break;
				}
			}
			if (j == n)
				break;
		}
		printf("%d\n", sum);
	}
	return 0;

}