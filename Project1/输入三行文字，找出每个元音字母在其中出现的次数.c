/*
输入三行文字，找出每个元音字母(A、E、I、O、U)在其中出现的次数

*/
#include<stdio.h>
#include <ctype.h>
int main()
{
	char a[3][10];
	int i,j;
	int count[5] = { 0 };
	for (i = 0; i < 3; i++)
		gets(a[i]);
	for (i = 0; i < 3; i++)
		for (j = 0; a[i][j] != '\0'; j++)
			a[i][j] = toupper(a[i][j]);
	for (i = 0; i < 3; i++)
		for (j = 0; a[i][j] != '\0'; j++)
				switch (a[i][j])
				{
				case 'A':count[0]++; break;
				case 'E':count[1]++; break;
				case 'I':count[2]++; break;
				case 'O':count[3]++; break;
				case 'U':count[4]++; break;
				default:break;
				}
	for (i = 0; i < 5; i++)
		printf("%d", count[i]);
	return 0;
}