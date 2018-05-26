#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	if ((fp = fopen("filel.txt", "w")) == NULL)
	{
		printf("ERROR\n");
		exit(1);
	}
	printf("输入若干字符（以*结束）：\n");
	while ((ch = fgetc(stdin)) != '*')
		fputc(ch, fp);
	fclose(fp);
	if((fp=fopen("filel.txt","r"))==NULL)
	{
		printf("ERROR\n");
		exit(1);
	}
	printf("&^&^&^&^&^&^&^\n");
	while ((ch = fgetc(fp)) != EOF)
		fputc(ch, stdout);
	fclose(fp);
	printf("\n");
	return 0;
}