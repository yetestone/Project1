#include<stdio.h>
#include<math.h>
int main()
{
	double x1, y1, x2, y2,d,s;
	scanf_s("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
	s = pow((x1 - x2),2) +pow((y1 - y2) , 2);
	d = sqrt(s);
	printf("%.2f", d);
	return 0;


}