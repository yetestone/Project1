/*
ĳС����5�ˣ��Ӽ����Ϸֱ��������ǵ�ѧ�š��������ɼ����������ߵ���Ϣ��ƽ���ɼ���

��1������Ҫ��
���룺5�˵�ѧ�š��������ɼ����ɼ�����С��
������ɼ���ߵ��˵���Ϣ���ɼ�����2λС��
��2���������
001  С��  89
002  С��  76
003  С��  87
004  С��  98
005  С��  76      ���������ݣ�

004  С��  98.00  85.20 �������������


���룺
������ɼ���õ�Ϊ:004  С��  98.00ƽ���ɼ�Ϊ:85.20
*/
#include<stdio.h>
#include<stdlib.h>
struct grade
{
	int number;
	char name[10];
	double mark;
};
int main()
{
	struct grade class1[5], *c1;
	int i,temp=4;
	double bestmark = 0,ave=0;
	for (c1=class1,i = 0; i < 5; c1++, i++)
		scanf("%d%s%lf", &c1->number, c1->name, &c1->mark);
	c1--;
	bestmark = c1->mark;
	for (; i > 0; i--, c1--)
	{
		ave += c1->mark;
		if (bestmark < c1->mark)
		{
			bestmark = c1->mark;
			temp = i;
		}
	}
	temp--;
	//printf("�ɼ���õ�Ϊ:%03d  %s  %.2fƽ���ɼ�Ϊ:%.2f", class1[temp].number, class1[temp].name, class1[temp].mark, ave / 5);
	//printf("\n%03d %s %.2f\n\n %.2f \n\n", class1[temp].number, class1[temp].name, class1[temp].mark, ave / 5);
	printf("\n%03d %s %.2f %.2f\n", class1[temp].number, class1[temp].name, class1[temp].mark, ave / 5);
	return 0;
}