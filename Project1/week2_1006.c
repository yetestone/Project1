#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (; n > 0; n--)
	{
		int data,a,max=0;
		double sum = 0;
		scanf("%d", &data);
		for (; data > 0; data--)
		{
			scanf("%d",&a);
			sum += a;
			max = max > a ? max : a;
		}
	
		printf(sum - max >= max - 1 ? "Yes\n" : "No\n");

	}
	return 0;
}