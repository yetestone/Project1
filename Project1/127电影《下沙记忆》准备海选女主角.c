/*
��Ӱ����ɳ���䡷׼����ѡŮ���ǣ��������죬�պ�����m*n��MM��վ��һ��m*n�Ķ��У�����Ϊÿ��MM���˷�������������32λ�з�������������������Ϊ������ ѡ�ι����ǣ�Ҫѡһ�����Է�������ֵ�����뻹��32λ����������MM��
��������
ÿ���������ݵĵ�һ������������m��n����ʾӦƸMM���ܹ�����������Ȼ����m��������ÿ����n����m��n�Ķ������Ŀ��������
�������
����ÿ���������ݣ������������x,y��s���ֱ��ʾѡ�е�MM���кš��кźͷ����� note:�кź��кŴ�һ��ʼ��
����ж��MM�ķ�������ֵһ������ô���������ǰ���һ�������к���С���Ǹ�������к���ͬ��ȡ�к���С���Ǹ�����
��������
2 3
1 4 -3
-7 3 0
�������
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