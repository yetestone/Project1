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
		case 0:printf("������"); break;
		case 1:printf("����һ"); break;
		case 2:printf("���ڶ�"); break;
		case 3:printf("������"); break;
		case 4:printf("������"); break;
		case 5:printf("������"); break;
		case 6:printf("������"); break;
	}
	
	system("pause");
	return 0;

}