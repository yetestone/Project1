#include<stdio.h>

void main()
{
	int i,c1=0,c2=0,c3=0,c4=0;
	for (i=1;i<50;i++)
	{
		int a;
		scanf_s("%d", &a);
		if (a == 0)
			break;
		switch (a)
		{
		case 1:c1++; break;
		case 2:c2++; break;
		case 3:c3++; break;
		case 4:c4++; break;
		}

	}
	printf("1��%d��\n", c1); 
	printf("2��%d��\n", c2); 
	printf("3��%d��\n", c3);
	printf("4��%d��\n", c4);
	
	return ;



}