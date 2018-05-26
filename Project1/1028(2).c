#include<stdio.h>
int main()
{
	double fa, mo,h;
	int sex;
	scanf_s("%d%lf%lf",&sex,&fa,&mo);
	if (sex == 0)
		h = (fa + mo)*0.52;
	else if (sex == 1)
		h = (fa*0.923 + mo) / 2;
	else
		return 0;
	printf("%.1f", h);
	return 0;


}