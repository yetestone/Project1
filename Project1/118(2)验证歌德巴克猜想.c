#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int sushu(int a)
{
	int i;
	if (a == 1)
		return 0;
	for (i = 2; i <= sqrt(a); i++)
	{

		if (a%i == 0)
			return 0;
	}
	return 1;
}
main()
{
	int c=6;
	while(c<2000)
	{
		int f, d = 3;
		while (d < c - 2)
		{

			f = c - d;

			if (d + f == c&&sushu(d) == 1 && sushu(f) == 1)
			{
				printf("%d=%d+%d\n", c, d, f);
				break;
			}
			d+=2;
		}
		c += 2;

	}
	
	system("pause");
}