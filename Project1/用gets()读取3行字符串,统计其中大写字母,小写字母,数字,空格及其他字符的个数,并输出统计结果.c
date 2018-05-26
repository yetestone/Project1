/*
用gets()读取3行字符串,统计其中大写字母,小写字母,数字,空格及其他字符的个数,并输出统计结果

输入格式：
输入三行字符串

输出格式：
见输出样例

输入样例：
123qwe   QWE
RTY   asd145
rtu   123QWE

输出样例：
大写字母有9个
小写字母有9个
数字有9个
空格有9个
其他字符有0个
*/
#include<stdio.h>
int main()
{
	char a[3][100];
	int i,j;
	int space_count = 0, bigletter_count = 0, smallletter_count = 0, number_count = 0, other_count = 0;
	for(i=0;i<3;i++)
		gets(a[i]);
	for(i=0;i<3;i++)
		for (j = 0; a[i][j] != '\0'; j++)
		{	
			switch (a[i][j])
			{
			case ' ':space_count++; break;
			default:
				if (a[i][j] >= 65 && a[i][j] <= 90)
					bigletter_count++;
				else if (a[i][j] >= 97 && a[i][j] <= 122)
					smallletter_count++;
				else if (a[i][j] >= 48 && a[i][j] <= 57)
					number_count++;
				else
					other_count++;
				break;
			}
		}
	printf("大写字母有%d个\n小写字母有%d个\n数字有%d个\n空格有%d个\n其他字符有%d个", bigletter_count, smallletter_count, number_count, space_count, other_count);
}
