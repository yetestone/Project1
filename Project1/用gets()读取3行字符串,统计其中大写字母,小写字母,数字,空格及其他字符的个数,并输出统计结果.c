/*
��gets()��ȡ3���ַ���,ͳ�����д�д��ĸ,Сд��ĸ,����,�ո������ַ��ĸ���,�����ͳ�ƽ��

�����ʽ��
���������ַ���

�����ʽ��
���������

����������
123qwe   QWE
RTY   asd145
rtu   123QWE

���������
��д��ĸ��9��
Сд��ĸ��9��
������9��
�ո���9��
�����ַ���0��
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
	printf("��д��ĸ��%d��\nСд��ĸ��%d��\n������%d��\n�ո���%d��\n�����ַ���%d��", bigletter_count, smallletter_count, number_count, space_count, other_count);
}
