//统计问题
//Time Limit : 3000 / 1000ms(Java / Other)   Memory Limit : 32768 / 32768K(Java / Other)
//Total Submission(s) : 69   Accepted Submission(s) : 41
//Problem Description
//在一无限大的二维平面中，我们做如下假设：<br>1、&nbsp; &nbsp; 每次只能移动一格；<br>2、&nbsp; &nbsp; 不能向后走（假设你的目的地是“向上”，那么你可以向左走，可以向右走，也可以向上走，但是不可以向下走）；<br>3、&nbsp; &nbsp; 走过的格子立即塌陷无法再走第二次；<br><br>求走n步不同的方案数（2种走法只要有一步不一样，即被认为是不同的方案）。<br>
//
//
//Input
//首先给出一个正整数C，表示有C组测试数据<br>接下来的C行，每行包含一个整数n(n <= 20)，表示要走n步。<br>
//
//
//Output
//请编程输出走n步的不同方案总数；<br>每组的输出占一行。<br>
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
//绍兴托普信息技术职业技术学院——第二届电脑文化节程序设计竞赛
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