#include<stdio.h>
int main()
{
	float r,c,s,pi;
	pi = 3.14;
	scanf_s("%f", &r);
	c = 2 * pi*r;
	s = pi*r*r;
	printf("�ܳ�=%.2f\n", c);
	printf("���=%.2f", s);
	return 0;
}