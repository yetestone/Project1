//ͳ������
//Time Limit : 3000 / 1000ms(Java / Other)   Memory Limit : 32768 / 32768K(Java / Other)
//Total Submission(s) : 69   Accepted Submission(s) : 41
//Problem Description
//��һ���޴�Ķ�άƽ���У����������¼��裺<br>1��&nbsp; &nbsp; ÿ��ֻ���ƶ�һ��<br>2��&nbsp; &nbsp; ��������ߣ��������Ŀ�ĵ��ǡ����ϡ�����ô����������ߣ����������ߣ�Ҳ���������ߣ����ǲ����������ߣ���<br>3��&nbsp; &nbsp; �߹��ĸ������������޷����ߵڶ��Σ�<br><br>����n����ͬ�ķ�������2���߷�ֻҪ��һ����һ����������Ϊ�ǲ�ͬ�ķ�������<br>
//
//
//Input
//���ȸ���һ��������C����ʾ��C���������<br>��������C�У�ÿ�а���һ������n(n <= 20)����ʾҪ��n����<br>
//
//
//Output
//���������n���Ĳ�ͬ����������<br>ÿ������ռһ�С�<br>
//
//
//Sample Input
//2
//1
//2
//
//
//Sample Output
//3
//7
//
//
//Author
//yifenfei
//
//
//Source
//����������Ϣ����ְҵ����ѧԺ�����ڶ�������Ļ��ڳ�����ƾ���
//https://blog.csdn.net/mrango/article/details/51298006

#include<stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	while (N--)
	{
		int M;
		int i;
		long long a[50] = { 3,7 };
		scanf("%d", &M);

		for (i = 2; i < M; i++)
		{
			a[i] = a[i - 2] + a[i - 1] * 2;
		}
		printf("%lld\n", a[M - 1]);
	}
	return 0;

}