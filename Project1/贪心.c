/*贪心算法-田忌赛马
题目：田忌赛马，能不能赢，能赢多少分。每人3匹马，一共3场比赛，赢一场200RMB；打平不输不赢RMB。作为田忌，事先是知道国王的赛马顺序，
你要排列自己的顺序，赢得最多的钱或输最少的钱。
实现：
Input：
The input will consist of a series of pairs of integers K1 K2 K3 and TJ1 TJ2 TJ3, separated by a space, one pair of integers per line.
Output：
For each pair of input integers K1 K2 K3 and TJ1 TJ2 TJ3 you should output the result in one line, and with one line of output for each line in input. 
Sample Input：
200 180 160 and 190 170 150
200 180 160 and 180 170 150
200 180 160 and 180 155 150
Sample Output：
Win 200 yuan
Win 0 yuan
Lose 200 yuan



150 160k 170 180k 190 200k
150 160k 170 180k 180 200k
150 155 160k 180k 180 200k

*/
#include<stdio.h>
int i,j,n;
void input(int a[])
{
	for (i = 0; i < 3; i++)
		scanf("%d", &a[i]);
}
void sort(int a[])
{
	int j,temp;
	for(i=0;i<3;i++)
		for(j=i+1;j<3;j++)
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}
int main()
{
	int k[3], tj[3], record[3] = { 0 };
	int a[6][3] = { 0 };
	int lastmark = 0;
	printf("input king\n");
	input(k);
	printf("input tian ji\n");
	input(tj);
	sort(k);
	sort(tj);
	if (tj[2] > k[2])
	{
		lastmark += 200;
		if (tj[0] > k[0])
		{
			lastmark += 200;
			if (tj[1] > k[1])
				lastmark += 200;
			else if (tj[1] < k[1])
				lastmark -= 200;
		}
		else if (tj[0] < k[0])
		{
			lastmark -= 200;
			if (tj[1] < k[0])
				lastmark -= 200;
			else if (tj[1] > k[0])
				lastmark += 200;
		}
		else
		{
			if (tj[1] > k[1])
				lastmark += 200;
		}

	}
	else if (tj[2] < k[2])
	{
		lastmark -= 200;
		if (tj[2] > k[1])
		{
			lastmark += 200;
			if (tj[1] > k[0])
				lastmark += 200;
			else if (tj[1] < k[0])
				lastmark -= 200;
		}
		else if (tj[2]<k[1])
		{
			lastmark -= 200;
			if (tj[2] < k[0])
				lastmark -= 200;
			else if (tj[2] > k[0])
				lastmark += 200;
		}
	}
	else
	{
		if (tj[1] > k[0])
			lastmark += 200;
		else if (tj[1] < k[0])
			lastmark -= 200;
	}
	printf("lastmark=%d\n", lastmark);
	return 0;
	
	
	
	/*for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			a[i][j] = tj[i] - k[j];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3&&j!=n; j++)
			if (a[i][j] > 0)
			{
				record[n = j] = 1;
				break;
			}
			else if (a[i][j] < 0)
			{
				record[n = j] = -1;
				break;
			}
			else
			{
				n = j;
				break;
			}

			*/
}
/*
sort(tj, tj + n);
sort(qw, qw + n);

res = 0;
max1 = max2 = n - 1;
min1 = min2 = 0;
cnt = 0;
while ((cnt++)<n)
{
	if (tj[max1]>qw[max2])
	{
		res += 200;
		max1--;
		max2--;
	}
	else if (tj[max1]<qw[max2])
	{
		res -= 200;
		min1++;
		max2--;
	}
	else
	{
		if (tj[min1]>qw[min2])
		{
			res += 200;
			min1++;
			min2++;
		}
		else
		{
			if (tj[min1]<qw[max2]) res -= 200;
			min1++;
			max2--;
		}
	}
}
printf("%d\n", res);
	}
	*/