#include<stdio.h>
#include<math.h>
int main()
{
	int m, n;
	
	while (scanf("%d %d", &m, &n) != EOF)
	{
		double sum=m,an=m;
		for(;n>1;n--)
		{
			sum += sqrt(an);
			an = sqrt(an);
		}
		printf("%.2f\n", sum);
	}



}