#include<stdio.h>

int main()
{
	int cm, kg;
	scanf_s("%d%d", &cm, &kg);
	cm -= 110;
	if (kg >= cm + 5)
		printf("fat");
	else if (kg <= cm - 5)
		printf("thin");
	else
		printf("good");
	return 0;
}