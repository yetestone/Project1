#include<stdio.h>
main()
{
	int a, hh, mm, ss;
	scanf_s("%d", &a);
	hh = a / 3600;
	ss = a % 60;
	mm = (a - hh * 3600 - ss) / 60;
	printf("%d:%d:%d", hh, mm, ss);

}