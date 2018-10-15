#include<stdio.h>

//void func(int a);
int main()
{
	/*double a[4];
	while (scanf("%lf %lf %lf %lf", a, a + 1, a + 2, a + 3) != EOF)
	{
		printf("%.2f\n", sqrt(pow(a[0] - a[2], 2) + pow(a[1] - a[3], 2)));
	}
	return 0;*/
	int a;
	while (scanf("%d", &a) != EOF)
	{
		int mul = 1,num;
		for (; a > 0; a--)
		{
			scanf("%d", &num);
			if(num%2!=0)
				mul *= num;
		}
		printf("%d\n", mul);
	}
	return 0;

}
//void func(int a)
//{
//	char mark;
//	if (a >= 90 && a <= 100)
//		mark = 'A';
//	else if (a >= 80 && a <= 89)
//		mark = 'B';
//	else if (a >= 70 && a <= 79)
//		mark = 'C';
//	else if (a >= 60 && a <= 69)
//		mark = 'D';
//	else if (a >= 0 && a <= 59)
//		mark = 'E';
//	else
//	{
//		printf("Score is error!\n");
//		return;
//	}
//	printf("%c\n", mark);
//
//	return;
//}