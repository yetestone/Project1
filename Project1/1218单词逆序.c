#include <stdio.h>
int main()
{

	char a[10][10];
	int i = 0, k;
	do {
		scanf("%s", a[i]);
		i++;
	} while (getchar() == ' ');
	k = i;
	for (i--; i > -1; i--)
	{
		printf(i == k - 1 ? "%s" : " %s", a[i]);
	}
	return 0;
}