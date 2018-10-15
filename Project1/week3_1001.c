//Problem A
//Time Limit : 2000 / 1000ms(Java / Other)   Memory Limit : 65536 / 32768K(Java / Other)
//Total Submission(s) : 254   Accepted Submission(s) : 63
//Problem Description
//FatMouse prepared M pounds of cat food, ready to trade with the cats guarding the warehouse containing his favorite food, JavaBean.
//The warehouse has N rooms.The i - th room contains J[i] pounds of JavaBeans and requires F[i] pounds of cat food.FatMouse does not have to trade for all the JavaBeans in the room, instead, he may get J[i] * a% pounds of JavaBeans if he pays F[i] * a% pounds of cat food.Here a is a real number.Now he is assigning this homework to you : tell him the maximum amount of JavaBeans he can obtain.
//
//
//Input
//The input consists of multiple test cases.Each test case begins with a line containing two non - negative integers M and N.Then N lines follow, each contains two non - negative integers J[i] and F[i] respectively.The last test case is followed by two - 1's. All integers are not greater than 1000.
//
//
//Output
//For each test case, print in a single line a real number accurate up to 3 decimal places, which is the maximum amount of JavaBeans that FatMouse can obtain.
//
//
//Sample Input
//5 3
//7 2
//4 3
//5 2
//20 3
//25 18
//24 15
//15 10
//- 1 - 1
//
//
//Sample Output
//13.333
//31.500





#include<stdio.h>
#include<stdlib.h>
typedef struct a
{
	int t;
	int m;
	int n;
	double jd;
} STR;

int cmp(const void *a, const void *b);
int main()
{
	int M, N;
	while (scanf("%d %d", &M, &N) != EOF)
	{
		STR b[1000];
		/*int J[1000][2];
		double jd[1000];*/
		double result = 0;
		int i = 0;
		if (M == -1 && N == -1)
			break;
		for (i=0; i < N; i++)
		{
		/*	scanf("%d %d", &J[i][0], &J[i][1]);*/
			scanf("%d %d", &b[i].m, &b[i].n);
			b[i].t = i;
		/*	jd[i] = (double)J[i][0] / J[i][1];*/
			b[i].jd = (double)b[i].m / b[i].n;
		}
		/*qsort(jd, N, sizeof(jd[0]), cmp);*/
		qsort(b, N, sizeof(b[0]), cmp);
		for(i=0;i<N;i++)
		{ 
			if (M >= b[i].n)
			{
				result += b[i].m;
				M -= b[i].n;
			}
			else
			{
				result += (double)M / b[i].n*b[i].m;
				break;
			}
		}
		printf("%.3f\n",result);
	}

	return 0;
}
int cmp(const void *a, const void *b)
{
	STR *aa = (STR *)a;
	STR *bb = (STR *)b;
	return(((aa->jd)>(bb->jd)) ? -1 : 1);
}