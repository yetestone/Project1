#include<stdio.h>
#include<stdlib.h>
int main()
{
	int y, m, d,w;
	scanf_s("%d%d%d", &y, &m, &d);
	if (m == 1 || m == 2)
		m += 12;
	w = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400 + 1) % 7;
	switch (w)
	{
		case 0:printf("星期日"); break;
		case 1:printf("星期一"); break;
		case 2:printf("星期二"); break;
		case 3:printf("星期三"); break;
		case 4:printf("星期四"); break;
		case 5:printf("星期五"); break;
		case 6:printf("星期六"); break;
	}
	
	system("pause");
	return 0;

}