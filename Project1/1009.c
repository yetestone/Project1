#include<stdio.h>

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		if(n%2==0)
			printf("%d\n\n", n / 2*(1 + n));
		else
			printf("%d\n\n", (1 + n)/2*n );
	}
	return 0;

}