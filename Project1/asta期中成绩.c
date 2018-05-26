#include<stdio.h>
int main()
{
	int T, n, m, a, b;
	int i, j, k;
	int class1[100] = { 0 }, class2[100] = { 0 },a[200];
	scanf("%d", &T);
	for (k = 1; k <= T; k++)
	{
		scanf("%d%d", &n, &m);
		for (i = 0; i < n; i++)
			scanf("%d", &class1[i]);
		for (i = 0; i < m; i++)
			scanf("%d", &class2[i]);
		for (i=0,j=0;;)
		{
			a[i]= min(class1[i], class2[j]);
			a[i + 1] = max(class1[i], class2[j]);

		}
	}
}