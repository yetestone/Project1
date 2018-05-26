#include<stdio.h>
main()
{
	int i;
	char ch[10];
	for (i = 0; i < 9; i++)
		scanf_s("%c", &ch[i]);
	ch[9] = '\0';
	for (i = 0; ch[i] != '\0'; i++)
		printf("%c", ch[i]);
}