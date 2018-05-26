/*将2-n之间的偶数按从小到大的顺序排列,按每5个一行显示，每个数字之间用tab分隔，再计算每行的平均数并输出
输入格式：
输入300以内的整数n

输出格式：
见输出样例

输入样例：
58
*/
#include<stdio.h>
int kkkk(int j);
int ave(int a[])
{
	int sum=0,flag=0,t;
	for (t = 0; t <= 4; t++)
	{
		if (*(a+t)!= 0)
			flag++;
		sum += *(a + t);
	}
	return sum /flag;
}
main()
{
	int n,i,imax,j;
	int a[150][4];
	scanf("%d", &n);// 输入一个小于300的整数。
	if (n % 2 != 0)//n非偶数时减1
		n -= 1;
	imax = ((n / 2) % 5 != 0 ? ((n / 2) / 5) + 1 : (n / 2) / 5);//确定最大行数
	for (i = 0; i < imax; i++)//初始化数组全为0
		for (j = 0;j < 5; j++)
			a[i][j] = 0;
	for (i = 0;i<imax; i++)//行变量i
	{
		for (j=0;j<5;j++)//赋值和输出同步进行；
		{
			a[i][j] = 10 * i + kkkk(j);
			if (i * 5 + j+1 == n / 2)
			{
				printf("%d\t", a[i][j]);
					break;
			}
			switch (j)
			{
			case 0:printf("%d\t", 2 + 10 * i); break;
			case 1:printf("%d\t", 4 + 10 * i); break;
			case 2:printf("%d\t", 6 + 10 * i); break;
			case 3:printf("%d\t", 8 + 10 * i); break;
			case 4:printf("%d\t", 10 + 10 * i); break;
			default:break;
			}
		}
		printf("\n");
	}

	for (i = 0; i < imax; i++)
	{
		printf("第%d组的平均数是%d", i+1, ave(&a[i][0]));//输出平均数
		printf("\n");
	}
}
int kkkk(int j)
{
	switch (j)
	{
		case 0:return(2); break;
		case 1:return(4); break;
		case 2:return(6); break;
		case 3:return(8); break;
		case 4:return(10); break;
		default:return 0;
	}
}

#include<stdio.h>

int main()

{

	int k,a[500],i,l,n=0,m=0;

	float b[101];

	scanf("%d",&k);

	//构造偶数数组,共n个

	for(i=2;i<=k;i++)

	{

		if(i%2==0)

			a[n++]=i;

	}

//输出偶数，并计算每行的平均数

	for(i=0,l=0,b[l]=0;i<n;i++)
	{

//输出偶数

		printf("%d\t",a[i]);

		if((i+1)%5==0)

			printf("\n");

		b[l]=b[l]+a[i];

		m++;

		if((i+1)%5==0)
		{

			b[l]=b[l]/m;

			l++;
			b[l]=0;m=0;

		}

}

//如果n不能被5除尽，补算最后一行

	if(n%5!=0)
		b[l]=b[l]/m;



	printf("\n");

	for(l=0;l<n*1.0/5;l++)

	{

	printf("第%d组的平均数是%.0f\n",l+1,b[l]);

	}

return 0;

}



