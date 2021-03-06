/*
题目描述
身份证的最后一位是根据前17位数字计算出来的检验码。
计算方法是：将身份证号码前17位数分别乘以不同的系数。
从第1位到第17位的系数分别为：7 9 10 5 8 4 2 1 6 3 7 9 10 5 8 4 2；
将乘积之和除以11，余数可能为                0 1 2 3 4 5 6 7 8 9 10。
则根据余数，分别对应的最后一位身份证的号码为1 0 X 9 8 7 6 5 4 3 2 \0
											0 1 2 3 4 5 6 7 8 9 10 11。
编写程序，输入身份证号码前17位，输出对应的检验码。
输入描述
输入身份证号码前17位
输出描述
输出对应的检验码
样例输入34052419800101001
样例输出X
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char id[18];
	char id_checkout[12] = { "10X98765432" };
	int id_coefficient[17] = { 7, 9, 10, 5, 8 ,4 ,2 ,1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
	int i, sum = 0;
	gets(id);
	for (i = 0; id[i] != '\0'; i++)
	{
		sum = (int)(id[i]-'0')*id_coefficient[i] + sum;
	}
	printf("%c", id_checkout[sum % 11]);
	return 0;
}