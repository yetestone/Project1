/*
电影《下沙记忆》准备海选女主角，面试那天，刚好来了m*n个MM，站成一个m*n的队列，导演为每个MM打了分数，分数都是32位有符号整数（分数还可能为负）。 选拔规则是：要选一个面试分数绝对值（必须还是32位整数）最大的MM。
输入描述
每组输入数据的第一行是两个整数m和n，表示应聘MM的总共的行列数，然后是m行整数，每行有n个，m和n的定义见题目的描述。
输出描述
对于每组输入数据，输出三个整数x,y和s，分别表示选中的MM的行号、列号和分数。 note:行号和列号从一开始，
如果有多个MM的分数绝对值一样，那么输出排在最前面的一个（即行号最小的那个，如果行号相同则取列号最小的那个）。
样例输入
2 3
1 4 -3
-7 3 0
样例输出
2 1 -7
*/
#include<stdio.h>
#include<math.h>
main()
{
	int m,n,i,j,max_aij,temp_i,temp_j;
	scanf("%d%d", &m, &n);
	int a[100][100];
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf("%d", *(a + i) + j);
	max_aij = a[m - 1][n - 1];
	temp_i = m - 1;
	temp_j = n - 1;
	for (i = m-1; i >=0; i--)
		for (j = n-1; j >=0; j--)
		{
			if (fabs(a[i][j]) >= fabs(max_aij))
			{
				temp_i = i;
				temp_j = j;
				max_aij=a[i][j];
			}
		}
	printf("%d %d %d", temp_i+1,temp_j+1, max_aij);
}
/*

#include<stdio.h>
#include<math.h>
int main()
{
	int m, n, i, j, x, y;
	double score[500][500],max;
	scanf("%d%d", &m, &n);
	for (i = 0; i<m; i++)
	{
		for (j = 0; j<n; j++) 
			scanf("%lf", &score[i][j]);
	}
	max = fabs(score[0][0]);
	for (i = 0; i<m; i++)
	{
		for (j = 0; j<n; j++) 
		{
			if (fabs(score[i][j])>max) 
			{ 
				max = fabs(score[i][j]); 
				x = i + 1; 
				y = j + 1; 
			}
		}
	}
	printf("%d %d %.0lf", x, y, score[x - 1][y - 1]);
	return 0;
}
*
#include<stdio.h>
#include<math.h>

int main()

{
	int m, n, i, j, x, y;

	double score[100][100], max;

	scanf("%d%d", &m, &n);

	for (i = 0; i<m; i++)

		for (j = 0; j<n; j++) scanf("%lf", &score[i][j]);

	max = fabs(score[0][0]);

	for (i = 0; i < m; i++)

	{
		for (j = 0; j < n; j++)

			if (fabs(score[i][j]) > max) { max = fabs(score[i][j]); x = i + 1; y = j + 1; }
	}
	printf("%d %d %.0lf", x, y, score[x - 1][y - 1]);

	return 0;

}
*/