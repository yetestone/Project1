/*
题目描述

用户输入两个复数，求其和并输出。要求将求两个复数的和写成函数。

输入描述

输入两个复数（实部和虚部都是整数）

输出描述

输出复数的和

样例输入

1+1i2+2i
样例输出

3+3i
*/
#include<stdio.h>
struct real_number sum(struct real_number real1, struct real_number real2);
struct real_number
{
	int real_part, imaginary_part;
};
int main()
{
	struct real_number real[2];
	int i,flag=1;
	for (i = 0; i < 2; i++) 
	{
		flag = 1;
		scanf("%d", &real[i].real_part);
		if (getchar() == '-')
			flag = -flag;
		scanf("%di",&real[i].imaginary_part);
		real[i].imaginary_part *= flag;
	}
	real[1] = sum(real[0], real[1]);
	printf("%d%+di", real[1].real_part, real[1].imaginary_part);
	return 0;
}
struct real_number sum(struct real_number real1, struct real_number real2)
{
	real2.real_part += real1.real_part;
	real2.imaginary_part += real1.imaginary_part;
	return real2;
}