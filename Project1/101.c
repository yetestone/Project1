#include<stdio.h>
int max(int a, int b);
main()
{   int x, y, z;
	printf("input two numbers:\n");
	scanf_s("%d%d", &x, &y);
	z = max(x, y);
	printf("maxima=%d\n", z);

}
int max(int a, int b)
{
	if (a > b)return a
		; else return b
		;
}