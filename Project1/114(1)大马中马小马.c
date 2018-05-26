#include<stdio.h>
#include<stdlib.h>
/*int main()
{
	int a,i,sum=0;
	scanf_s("%d", &a);
	if (a >= 0)
	{
		for (i = a; i <= 2 * a; i++)
			sum += i;

	}
	else
	{
		for (i=a;i>=2*a;i--)
		{
			sum += i;
		}

	}
	printf("sum=%d", sum);
	return 0;
}*/
main()
{
	int M,maxa;
	int a, c, b;
	scanf_s("%d", &M);
	if (M <= 200 && M >= 100)
	{
		a = M / 3;
		printf("大马	中马	小马");
		for (;;a--)
		{
			c++;
			b++;
			if (a + b + c == 100 && 3 * a + 2 * b + 0.5*c == M)
				printf("%le	%le	%le", a, b, c);
		}
	}
}