#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int xxx(int a, int i)
{
	return (a / (int)pow(10.0, i - 1) % 10);



}



main()
{
	int a, i, ha[20], sum = 0,t;
	scanf("%d", &a);
	t = a;
	while (t) {
		sum++;
		t/= 10;
	}
	for (i = 1; i>0; i++)
	{
		ha[i] = xxx(a, i);
		if (ha[i] == 0)break;
	}
	ha[0] = 0;
	for (i =sum ;ha[i]!=0;i--)
	{
		switch (ha[i])
		{
		case 1:printf("One"); break;
		case 2:printf("Two"); break;
		case 3:printf("Three"); break;
		case 4:printf("Four"); break;
		case 5:printf("Five"); break;
		case 6:printf("Six"); break;
		case 7:printf("Seven"); break;
		case 8:printf("Eight"); break;
		case 9:printf("Nine"); break;
		default:printf("Error"); return;
		}
		printf(" ");
	}

system("pause");

}