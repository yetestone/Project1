#include<stdio.h>



int gcd(int da, int xiao)
{
	if (xiao == 0)
		return da;
	return gcd(xiao, da%xiao);

}

int main()
{
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		printf("%d\n", a / gcd(a, b)*b);
	}
	return 0;
}