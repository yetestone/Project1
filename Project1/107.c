#include<stdio.h>
#include<stdlib.h>
int main()
{
/*	int i, sum = 0;
	i = 1;
	while (i <= 100)
	{
		sum = sum + i;
		//sum = sum + i++;
		i++;
	}
	printf("100������������֮��Ϊ��%d\n", sum);*/
/*	int number = 200;
	int year = 2014;
	do {
		year++;
		number = number * (1 + 0.2 ); 
		//number*=1.2//�����ǲ���Ӧ��д��ʲô��
	} while (number < 1000);    //�������ȱ��ʲô
	printf("��%d���й���ģͻ��1000��\n", year);
	 �������sum, num
	int sum, num;
	sum = 0;
	for (num = 0; num<=10; num++) //forѭ��������num�ı仯ֵ
	{
		sum = num + sum;	    //����ÿ������֮��ĺ�sum
	}
	printf("10�������ĺ�Ϊ��%d", sum);
		*/
		//������λ��num,��λ��sd,ʮλ��td,��λ��hd
   // int num, sd, td, hd;
	//ѭ��������λ��
	/*for (num = 100; num <= 999; ++num)
	{
		//��ȡ��λ����num��λ�ϵ�����
		hd = num / 100;
		//��ȡ��λ����numʮλ�ϵ�����
		td = num % 100 / 10;
		//��ȡ��λ����num��λ�ϵ�����
		sd = num - hd * 100 - td * 10;
		//ˮ�ɻ�����������ʲô��
		if (num == sd*sd*sd + td*td*td + hd*hd*hd)
		{
			printf("ˮ�ɻ����֣�%d\n", num);
			//printf("sd:%d\n", sd);
		}
	}
	
	int a = 123, b;
		b = a /100;
	printf("%d", b);
	*/	
	int sum = 0, i = 1, flag = 1;
	while (i <= 100)
	{
		if (i % 2 == 0)
		{
			i = (-1)*i;
		}
		sum += i;
		i++;


		printf("sum=%d/n", sum);
		printf("falg");
	}
		
		
		
		
		
		
		
	system("pause");




	return 0;
}