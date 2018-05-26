#include<stdio.h>
void prn(char c, int m);
main()
{
	char c;
	int m;
	scanf("%c %d", &c,&m);
	prn(c, m);
}
void prn(char c, int m)
{
	int i;
	for(i=1;i<=m;i++)
		printf("%c", c);
	return;
}