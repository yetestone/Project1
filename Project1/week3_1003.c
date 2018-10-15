//Problem C
//Time Limit : 1000 / 1000ms(Java / Other)   Memory Limit : 32768 / 32768K(Java / Other)
//Total Submission(s) : 60   Accepted Submission(s) : 41
//Problem Description
//Ignatius has just come back school from the 30th ACM / ICPC.Now he has a lot of homework to do.Every teacher gives him a deadline of handing in the homework.If Ignatius hands in the homework after the deadline, the teacher will reduce his score of the final test.And now we assume that doing everyone homework always takes one day.So Ignatius wants you to help him to arrange the order of doing homework to minimize the reduced score.
//
//
//Input
//The input contains several test cases.The first line of the input is a single integer T that is the number of test cases.T test cases follow.Each test case start with a positive integer N(1 <= N <= 1000) which indicate the number of homework..Then 2 lines follow.The first line contains N integers that indicate the deadlines of the subjects, and the next line contains N integers that indicate the reduced scores.
//
//
//Output
//For each test case, you should output the smallest total reduced score, one line per test case.
//
//
//Sample Input
//3
//3
//3 3 3
//10 5 1
//3
//1 3 1
//6 2 3
//7
//1 4 6 4 2 4 3
//3 2 1 7 6 5 4
//
//
//Sample Output
//0
//3
//5


#include<stdio.h>
#include<stdlib.h>
typedef struct test
{
	int end;
	int loss;
} STR ;


int cmp(const void *a, const void *b)
{
	STR *aa = (STR *)a;
	STR *bb = (STR *)b;
	return(((aa->loss)>(bb->loss)) ? -1 : 1);
}

int main()
{
	int T;
	STR a[1001];
	scanf("%d", &T);
	while (T--)
	{
		int N,t,i,lostsum=0;
		int b[1001] = {0};
		scanf("%d", &N);
		for (t = 0; t < N; t++)
		{
			scanf("%d", &a[t].end);
		}
		for (t = 0; t < N; t++)
		{
			scanf("%d", &a[t].loss);
		}
		qsort(a, N, sizeof(a[0]), cmp);
		
		b[0] = 1;
		for (t = 0; t < N; t++)
		{
			
			for (i = a[t].end; i >= 0; i--)
			{
				if (b[i] == 0)
				{
					b[i]++;
					break;
				}
			}
			if (i == -1)
				lostsum += a[t].loss;
		}
		printf("%d\n", lostsum);
	}

	return 0;
}