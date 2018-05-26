#include<stdio.h>
int main()
{
	char a[7][10] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
	int t;
	scanf("%d", &t);
	printf((t <= 7 && t >= 1) ? "%s", a[t - 1] : "ERROR");
	return 0;
}
