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
	printf("1有%d个\n", c1); 
	printf("2有%d个\n", c2); 
	printf("3有%d个\n", c3);
	printf("4有%d个\n", c4);
	
	return ;



}