#include<stdio.h>
#include<stdlib.h>
int main()
{
	/*
	int a;
	scanf_s("%d", &a);
	switch (a % 2)
	{
	case 0:printf("偶数\n");
		break;
	case 1:printf("奇数\n");
		break;
	}
	*/
	/*int grade;
	char level;
	scanf_s("%d", &grade);
	if (grade <= 100 && grade >= 90)
		level = 'A';
	else if (grade < 90 && grade >= 80)
		level = 'B';
	else if (grade < 80 && grade >= 70)
		level = 'C';
	else if (grade < 70 && grade >= 60)
		level = 'D';
	else
		level = 'E';
	printf("您的等级为'%c'", level);
	*/
	int year, m,day;
	scanf_s("%d%d", &year, &m);
	switch (m)
	{
	case 4: day = 30;
		break;
	case 2:
		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
			day = 29;
		else
			day = 28;
		break;
	case 6:day = 30; break;
	case 9: day = 30; break;
	case 11:day = 30; break;
	default: day = 31;
	}
	
	printf("%d年%d月有%d天", year, m, day);
	
	



	
	system("pause");
	return 0;

}