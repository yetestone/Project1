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
	printf("100以内所有整数之和为：%d\n", sum);*/
/*	int number = 200;
	int year = 2014;
	do {
		year++;
		number = number * (1 + 0.2 ); 
		//number*=1.2//这里是不是应该写点什么？
	} while (number < 1000);    //这里好像缺点什么
	printf("到%d年招工规模突破1000人\n", year);
	 定义变量sum, num
	int sum, num;
	sum = 0;
	for (num = 0; num<=10; num++) //for循环条件与num的变化值
	{
		sum = num + sum;	    //计算每次数字之间的和sum
	}
	printf("10以内数的和为：%d", sum);
		*/
		//定义三位数num,个位数sd,十位数td,百位数hd
   // int num, sd, td, hd;
	//循环所有三位数
	/*for (num = 100; num <= 999; ++num)
	{
		//获取三位数字num百位上的数字
		hd = num / 100;
		//获取三位数字num十位上的数字
		td = num % 100 / 10;
		//获取三位数字num个位上的数字
		sd = num - hd * 100 - td * 10;
		//水仙花数的条件是什么？
		if (num == sd*sd*sd + td*td*td + hd*hd*hd)
		{
			printf("水仙花数字：%d\n", num);
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